using UnityEngine;
using System.Collections;

public class main : MonoBehaviour {

	public GameObject _plane;		
	public GameObject _planeParent; 
	public GameObject _background;	
	public Texture2D[] _texAll;		
	public Vector3[] _RandomPos;	
	private float[] _RandomPosx;
	private float[] _RandomPosy;
	public int raw = 3;				
	public int volumn = 3;			
	public float factor = 0.25f;	

	GameObject[] _tempPlaneAll;		
	
	float sideLength = 0;			
	
	int finishCount = 0;			
	int _index = 1;
	
	Vector2 originPoint;			
	Vector2 space;		

	// add @xiaofeng! 使右侧图片拖动最前面的
	private float tempz;
	/*
	// @xiaofeng: for display animition:
	private Object[] anim;
	private int mFrameCount;
	private float fps = 5;
	private float time = 0;			
	private	int canDisplayButton = 0;
	private int playTimes = 0;
	private int nowFram = 0;
	*/
	
	void Start()
	{
		// 初始化 _RandomPos
		_RandomPosx = new float[3]; _RandomPosy = new float[3];
		_RandomPosx[0] = _RandomPos[0].x; _RandomPosy[0] = _RandomPos[0].y;
		_RandomPosx[1] = _RandomPos[1].x; _RandomPosy[1] = _RandomPos[1].y;
		_RandomPosx[2] = _RandomPos[2].x; _RandomPosy[2] = _RandomPos[2].y;

		sideLength = _background.transform.localScale.x;
		space.x = sideLength / volumn;
		space.y = sideLength / raw;
		originPoint.x = -((volumn - 1) * space.x) / 2;
		originPoint.y = ((raw - 1) * space.y) / 2;
		Vector2 range;
		range.x = space.x * factor * 10f;
		range.y = space.y * factor * 10f;
		
		_tempPlaneAll = new GameObject[raw * volumn];
		int k = 0;
		for(int i = 0 ; i != raw ; ++i)
		{
			for(int j = 0 ; j != volumn ; ++j)
			{
				GameObject tempObj = (GameObject)Instantiate(_plane);
				tempObj.name = "Item" + k;
				tempObj.transform.parent = _planeParent.transform;
				tempObj.transform.localPosition = new Vector3((originPoint.x + space.x * j) * 10f, (originPoint.y - space.y * i) * 10f, 0);
				tempObj.transform.localScale = new Vector3(space.x, 1f, space.y);
				Vector2 tempPos = new Vector2(originPoint.x + space.x * j, originPoint.y - space.y * i);
				
				float offset_x = (tempPos.x <= 0 + Mathf.Epsilon) ? (0.5f - Mathf.Abs((tempPos.x - space.x / 2) / sideLength)) : (0.5f + (tempPos.x - space.x / 2) / sideLength);
				float offset_y = (tempPos.y <= 0 + Mathf.Epsilon) ? (0.5f - Mathf.Abs((tempPos.y - space.y / 2) / sideLength)) : (0.5f + (tempPos.y - space.y / 2) / sideLength);
				
				float scale_x = Mathf.Abs(space.x / sideLength);
				float scale_y = Mathf.Abs(space.y / sideLength);
				
				tempObj.GetComponent<Renderer>().material.mainTextureOffset = new Vector2(offset_x, offset_y);
				tempObj.GetComponent<Renderer>().material.mainTextureScale = new Vector2(scale_x, scale_y);
				tempObj.SendMessage("SetRange", range);
				
				_tempPlaneAll[k] = tempObj;
				++k;
			}
		}
		/*
		// @xiaofeng: initialise anim
		anim = Resources.LoadAll("anims");
		mFrameCount = anim.Length;
		Debug.Log(anim.Length);
		*/
	}
	
	int tempindex = 0;
	void OnGUI()
	{
		GUI.skin.button.fontSize=Screen.height/15;
		if(GUI.Button(new Rect(Screen.width/15, Screen.height*4/7, Screen.width/6, Screen.height/10), "Play")){
			StartGame();

			_RandomPos[0].x = _RandomPosx[0]; _RandomPos[0].y = _RandomPosy[0];
			_RandomPos[1].x = _RandomPosx[1]; _RandomPos[1].y = _RandomPosy[1];
			_RandomPos[2].x = _RandomPosx[2]; _RandomPos[2].y = _RandomPosy[2];
		}
		if(GUI.Button(new Rect(Screen.width/15, Screen.height*5/7, Screen.width/6, Screen.height/10), "Next")){
			ChangeTex();
		}
	}
	void StartGame()
	{
		tempz = 0;
		for(int i = 0 ; i != _tempPlaneAll.Length ; ++i)
		{
			int tempRank = Random.Range(0, _RandomPos.Length);
			// @xiaofeng有bug报告！！！ 03.29
			_RandomPos[tempRank].x -= 0.1f;
			_RandomPos[tempRank].y -= 0.1f;
			
			_tempPlaneAll[i].transform.localPosition = new Vector3(_RandomPos[tempRank].x, _RandomPos[tempRank].y, tempz);
			tempz -= 0.1f;
		}
		gameObject.BroadcastMessage("Play");
	}
	
	void SetIsMoveFale()
	{
		gameObject.BroadcastMessage("IsMoveFalse");
	}
	
	void IsFinish()
	{
		++finishCount;
		if(finishCount == raw * volumn){
			//showPrise();
			Debug.Log("Finish!");
		}
	}
	
	void ChangeTex()
	{
		_background.GetComponent<Renderer>().material.mainTexture = _texAll[_index];
		_plane.GetComponent<Renderer>().material.mainTexture = _texAll[_index];
		gameObject.BroadcastMessage("SetTexture", _texAll[_index++]);
		if(_index > _texAll.Length - 1)
			_index = 0;
	}

	/* 可行！但更新速率有问题，注释掉
	// @xiaofeng: 展示奖励动画
	void showPrise(){
		Debug.Log(nowFram);
		Debug.Log(mFrameCount);
		GUI.DrawTexture(new Rect(Screen.width/3, Screen.height/3, Screen.width/3, Screen.height/3), (Texture2D)anim[nowFram], ScaleMode.StretchToFill, true, 10.0F);
		time += Time.deltaTime;

		if(time >= 1.0/fps && nowFram < mFrameCount-1){
			nowFram++;
			time = 0;
			playTimes++;
		}
		if(nowFram >= mFrameCount){
			canDisplayButton = 1;
		}

		if(canDisplayButton == 1){
			if(GUI.Button(new Rect(Screen.width/3, Screen.height*6/7, Screen.width/6, Screen.height/10), "Menu"))
				;
			if(GUI.Button(new Rect(Screen.width*2/3, Screen.height*6/7, Screen.width/6, Screen.height/10), "Next"))
				ChangeTex();
		}
	}
	*/
	
}
