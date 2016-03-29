using UnityEngine;
using System.Collections;

public class MouseShow : MonoBehaviour {
	private float fps = 8;					// 帧速率
	private float time = 0;
	private int rectNum = 0;
	private float ctime = 0;
	public int score = 0;

	public GUIStyle buttonStyle;
	public GUIStyle labelStyle;

	private Rect[] rects = {
		new Rect(Screen.width/35, 
				-Screen.height/13, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 - Screen.width/6, 
				-Screen.height/13, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 + Screen.width/7, 
				-Screen.height/13, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/35, 
				Screen.height*9/24, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 - Screen.width/6, 
				Screen.height*9/24, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 + Screen.width/7, 
				Screen.height*9/24, 
				Screen.width/3, Screen.height/2)
	};

	// 负责地鼠、锤子等动画
	public Texture2D holes;
	public Texture2D[] anim;
	public Texture2D[] anim1;
	public Texture2D[] anim2;
	public Texture2D[] animHammer;
	private int mFrameCount;
	private int mInFrameCount;
	private int mOutFrameCount;
	private int mHammerFrameCount;
	private int nowFram;
	private int nowHammerFram;
	private int nowInFram;
	private int nowOutFram = 7;

	private Rect hammerRect;

	// 负责计时：
	private float startTime;
	// 默认游戏时间为2分钟
	public float timeLen = 120;
	// 游戏结束的标志
	private bool endGame = false;

	// Use this for initialization
	void Start () {
		mFrameCount = 7;
		mHammerFrameCount = animHammer.Length;
		startTime = Time.time;
	}
	
	// Update is called once per frame
	bool itIn=true, itOut=false, itHammer=false;
	bool needChange = false;

	// for 地鼠随机
	int showIndex;
	void OnGUI () {
		if(!endGame){
			GUI.skin.label.fontSize=Screen.height/15;
			GUI.DrawTexture(new Rect(0, 0, Screen.width, Screen.height), (Texture2D)holes, ScaleMode.StretchToFill, true, 0);
			GUILayout.Label("Score: "+score, labelStyle);
			// 获取选中的rect的随机数，每隔3秒变换一次
			// 或者被砸中：
			if(itOut == true)
				needChange = true;
			// 确保在完全退出时，执行变化
			if(needChange){
				if(!itOut){
					ctime = Time.time;
					rectNum = Random.Range(0, 6);
					showIndex = Random.Range(0,3);
					needChange = false;
					// 新一轮开始
					itIn = true;
				}

			}
			if(Time.time - ctime > 3 && itOut == false){
				needChange = true;
				//Debug.Log(rectNum);
			}
			if(Time.time - startTime > timeLen)
				endGame = true;

			if(itIn){
				itInShow(rects[rectNum]);
			}
			else if(itOut){
				itOutShow(rects[rectNum]);
			}
			else{
				itShow(rects[rectNum]);
			}

			// 在没被砸中时也能显示锤子
			if(Input.GetMouseButtonDown(0)){
				Vector3 mousePosCurrent = Input.mousePosition;
		        hammerRect = new Rect(mousePosCurrent.x-Screen.width/14, Screen.height - mousePosCurrent.y-Screen.height/10, Screen.width/7, Screen.height/5);
		        itHammer = true;
			}
	        if(itHammer){
	        	itHammerShow(hammerRect);
	        }

			// 被砸中：
			if(GUI.Button(rects[rectNum], "", buttonStyle)){
				itOut = true;		
				score++;
			}
		}else{
			GUI.skin.button.fontSize = Screen.height/15;
			GUI.skin.button.normal.textColor = Color.yellow;
			GUI.Button(new Rect(Screen.width/6, Screen.height/12, Screen.width*4/6, Screen.height*4/6), 
				"You got " + score + " score！");
			if(GUI.Button(new Rect(Screen.width/6, Screen.height*9/12, Screen.width*4/6, Screen.height*1/6), 
				"Click here to restart!")){
				score = 0;
				endGame = false;
				Application.LoadLevel(0);
			}

		}
		
	}

	// @xiaofeng: for animition!
	void itShow(Rect rect){
		//Debug.Log(mFrameCount + ":" + nowFram);
		if(showIndex == 0)
			GUI.DrawTexture(rect, anim[6], ScaleMode.StretchToFill, true, 10.0F);
		else if(showIndex == 1)
			GUI.DrawTexture(rect, anim1[6], ScaleMode.StretchToFill, true, 10.0F);
		else
			GUI.DrawTexture(rect, anim2[6], ScaleMode.StretchToFill, true, 10.0F);

		/*
		time += Time.deltaTime;
		if(time >= 1.0/fps){
			nowFram++;
			time = 0;
			if(nowFram >= mFrameCount){
				nowFram = 0;
			}
		}
		*/
	}
	void itInShow(Rect rect){
		//Debug.Log(mFrameCount + ":" + nowFram);
		if(showIndex == 0)
			GUI.DrawTexture(rect, anim[nowInFram], ScaleMode.StretchToFill, true, 10.0F);
		else if(showIndex == 1)
			GUI.DrawTexture(rect, anim1[nowInFram], ScaleMode.StretchToFill, true, 10.0F);
		else
			GUI.DrawTexture(rect, anim2[nowInFram], ScaleMode.StretchToFill, true, 10.0F);
		time += Time.deltaTime;
		if(time >= 1.0/fps){
			nowInFram++;
			time = 0;
			if(nowInFram >= mFrameCount){
				// 地鼠进入画面完成！
				itIn = false;
				nowInFram = 0;
			}
		}
	}
	void itOutShow(Rect rect){
		//Debug.Log(mFrameCount + ":" + nowFram);
		if(showIndex == 0)
			GUI.DrawTexture(rect, anim[nowOutFram], ScaleMode.StretchToFill, true, 10.0F);
		else if(showIndex == 1)
			GUI.DrawTexture(rect, anim1[nowOutFram], ScaleMode.StretchToFill, true, 10.0F);
		else
			GUI.DrawTexture(rect, anim2[nowOutFram], ScaleMode.StretchToFill, true, 10.0F);
		time += Time.deltaTime;
		if(time >= 1.0/fps){
			nowOutFram++;
			time = 0;
			if(nowOutFram >= 9){
				// 地鼠退出画面完成！
				itOut = false;
				nowOutFram = 7;
			}
		}
	}
	void itHammerShow(Rect rect){
		//Debug.Log(mFrameCount + ":" + nowFram);
		GUI.DrawTexture(rect, animHammer[nowHammerFram], ScaleMode.StretchToFill, true, 10.0F);
		time += Time.deltaTime;
		if(time >= 1.0/fps){
			nowHammerFram++;
			time = 0;
			if(nowHammerFram >= mHammerFrameCount){
				// 地鼠退出画面完成！
				itHammer = false;
				nowHammerFram = 0;
			}
		}
	}
}
