using UnityEngine;
using System.Collections;

public class nav : MonoBehaviour {
	private string arg = null;

	// Use this for initialization
	void Start () {
		arg = UnityEngine.WSA.Application.arguments.ToString();
	}
	
	void OnGUI(){
		/*
		if(arg != null){
			Application.LoadLevel(arg);
		}else{
		*/
			if(GUILayout.Button("画个圈圈诅咒坏蛋")){
				Application.LoadLevel("Games/DrawShape/DrawShape");
			}
			if(GUILayout.Button("把路飞拼出来")){
				Application.LoadLevel("Games/PinTu/Resources/PinTu");
			}
			if(GUILayout.Button("打死臭地鼠")){
				Application.LoadLevel("Games/DaDiShu/DaDiShu");
			}
			if(GUILayout.Button("向左向右滑")){
				Application.LoadLevel("Games/MusicArrow/MusicArrow");
			}

		//}
		
	}
}
