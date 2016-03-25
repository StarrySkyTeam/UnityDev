using UnityEngine;
using System.Collections;

public class MouseShow : MonoBehaviour {
	private Object[] anim;
	private int nowFram;
	private int mFrameCount;
	private float fps = 5;					// 帧速率
	private float time = 0;
	private bool canShow = false;
	private int rectNum = 0;
	private float ctime = 0;
	private int score = 0;

	private GameObject holes;

	public GUIStyle buttonStyle;
	public GUIStyle labelStyle;

	private Rect[] rects = {
		new Rect(Screen.width/30, 
				Screen.height/12, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 - Screen.width/6, 
				Screen.height/12, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 + Screen.width/7, 
				Screen.height/12, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/30, 
				Screen.height*25/40, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 - Screen.width/6, 
				Screen.height*25/40, 
				Screen.width/3, Screen.height/2),
		new Rect(Screen.width/2 + Screen.width/7, 
				Screen.height*25/40, 
				Screen.width/3, Screen.height/2)
	};

	// Use this for initialization
	void Start () {
		anim = Resources.LoadAll("anims");
		mFrameCount = anim.Length;
	}
	
	// Update is called once per frame
	void OnGUI () {
		GUILayout.Label("Score: "+score, labelStyle);
		// 获取选中的rect的随机数，每隔3秒变换一次
		if(Time.time - ctime > 3){
			ctime = Time.time;
			rectNum = Random.Range(0, 6);
			//Debug.Log(rectNum);
		}
		if(canShow == false){
			canShow = true;
			ctime = Time.time;
			rectNum = Random.Range(0, 6);
			//Debug.Log(rectNum);
		}
		itShow(rects[rectNum], canShow);
		if(GUI.Button(rects[rectNum], "", buttonStyle)){
			canShow = false;
			score++;
		}
	}

	// @xiaofeng: for animition!
	void itShow(Rect rect, bool canShow){
		//Debug.Log(mFrameCount + ":" + nowFram);
		if(canShow){
			GUI.DrawTexture(rect, (Texture2D)anim[nowFram], ScaleMode.StretchToFill, true, 10.0F);
			time += Time.deltaTime;
			if(time >= 1.0/fps){
				nowFram++;
				time = 0;
				if(nowFram >= mFrameCount){
					nowFram = 0;
				}
			}
		}
	}
}
