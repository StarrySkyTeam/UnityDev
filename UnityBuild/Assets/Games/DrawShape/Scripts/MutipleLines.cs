using UnityEngine;
using System.Collections;

public class MutipleLines : MonoBehaviour {
	public GameObject circlePointPrefab;
	public GameObject currentLineRenderer;
	public GameObject lineRendererPrefab;
	public Material drawingMaterial;

	private Vector3 prePosition, currentPosition;
	private bool clickStarted;
	private int numOfPoints;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
		//currentPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		//currentPosition.z = -5.0f;
		if(Input.GetMouseButtonDown(0)){
			TouchSpaceHandle();
			clickStarted = true;
		}else if(clickStarted){
			TouchSpaceHandle();
		}

		// Stop writing the line
		if(Input.GetMouseButtonUp(0)){
			clickStarted = false;
			// everytime I release the mouse, i want to create a new lineRenderer
			currentLineRenderer = null;
			numOfPoints = 0;
		}
	}

	// @xiaofeng: drawing a line
	private void TouchSpaceHandle(){
		if(currentLineRenderer == null){
			currentLineRenderer = Instantiate(lineRendererPrefab) as GameObject;
			GameObject lines = GameObject.Find("Lines");
			currentLineRenderer.transform.parent = lines.transform;
		}

		numOfPoints++;

		Vector3 mousePos = Input.mousePosition;
		Vector3 wantedPos = Camera.main.ScreenToWorldPoint(new Vector3(mousePos.x, mousePos.y, 0 - Camera.main.transform.position.z));

		LineRenderer ln = currentLineRenderer.GetComponent<LineRenderer>();
		ln.SetVertexCount(numOfPoints);
		// change from the pre-point（numOfPoints -1） to the current point！
		ln.SetPosition(numOfPoints-1, wantedPos);
	}
}
