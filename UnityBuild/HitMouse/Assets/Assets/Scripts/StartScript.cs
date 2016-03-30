using UnityEngine;
using System.Collections;

public class StartScript : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void OnGUI () {
		GUI.skin.button.fontSize = Screen.height/15;
		GUI.skin.button.normal.textColor = Color.red;
		if(GUI.Button(new Rect(Screen.width/6, Screen.height/6, Screen.width*4/6, Screen.height*4/6), 
				"Start Game!")){
			Application.LoadLevel(1);
		}
	}
}
