using UnityEngine;
using System.Collections;

public class HandMove : MonoBehaviour {
    private GameObject hand;
    private float cx;
    private float moveSpeed = 2;
    private Vector2 touchBegin = Vector2.zero;
    private Vector2 touchEnd = Vector2.zero;
    private string str;
    private int direct = 0;					// 0-->left; 1-->right;
    private int needJudge = 1;

    private SoundHelper sh;
    private AudioSource currentAudio;
    private int canMoveFinger = 0;

    public void Start () {
        //nextone = GameObject.Find("nextone");
    	hand = GameObject.Find("hand");
    	cx = hand.transform.position.x + 1;
        sh = SoundHelper.Instance;
    }

    public void OnGUI(){
        GUI.skin.button.fontSize=Screen.height/15;
        //Debug.Log(sh.getAudio());
        canMoveFinger = 1;
        if(!sh.getAudio() && needJudge == 1){
            direct = Random.Range(0, 2);
            if(direct==1){
                sh.MakeRightSound();
                hand.transform.position = new Vector3(cx, -1, 0);
            }else{
                sh.MakeLeftSound();
                hand.transform.position = new Vector3(-cx, -1, 0);
                handMoveLeft();
            }
            needJudge = 0;
        }
        if(sh.getAudio()){
            canMoveFinger = 0;
        }

        if(Event.current.type == EventType.MouseDown){
            touchBegin = Event.current.mousePosition;
        }
        if(Event.current.type == EventType.MouseDrag){
            touchEnd = Event.current.mousePosition;
            if((touchEnd.x < touchBegin.x && direct == 0) ||(touchEnd.x > touchBegin.x && direct == 1)){
                if(!sh.getAudio()){
                    sh.MakeCorrectSound();
                    needJudge = 1;
                }
            }else{
                if(!sh.getAudio()){
                    sh.MakeWrongSound();
                    needJudge = 1;
                }
            }
        }
        if(canMoveFinger == 1){
            if(direct == 1){
                handMoveRight();
            }else{
                handMoveLeft();
            }

        }
        
        //GUI.Label(new Rect(0, 0, Screen.width, 100), "方向是： " + str);
    }
    public void handMoveRight(){
    	moveSpeed = 1;
    	hand.transform.Translate(new Vector3(moveSpeed*Time.deltaTime, 0, 0));
    	if(hand.transform.position.x - cx > 3){
    		hand.transform.position =new Vector3(cx, -1, 0);
    	}
    }
    public void handMoveLeft(){
    	moveSpeed = -1;
    	hand.transform.Translate(new Vector3(moveSpeed*Time.deltaTime, 0, 0));
    	if(hand.transform.position.x + cx < -3){
    		hand.transform.position =new Vector3(-cx, -1, 0);
    	}
    }
}