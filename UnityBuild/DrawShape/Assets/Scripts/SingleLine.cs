using UnityEngine;
using System.Collections;

public class SingleLine : MonoBehaviour {
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
		if(currentLineRenderer == null)
			currentLineRenderer = (GameObject)Instantiate(lineRendererPrefab);
		
		currentPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		currentPosition.z = -5.0f;
		if(Input.GetMouseButtonDown(0)){
			InstantiateCirclePoint(currentPosition, currentLineRenderer.transform);
			clickStarted = true;
		}else if(clickStarted){
			TouchSpaceHandle(currentPosition, currentLineRenderer);
		}

		// Stop writing the line
		if(Input.GetMouseButtonUp(0)){
			clickStarted = false;
		}
	}

	// @xiaofeng: drawing a point
	private void InstantiateCirclePoint(Vector3 pos, Transform parent){
		GameObject currentCircle = (GameObject)Instantiate(circlePointPrefab);
		currentCircle.transform.parent = parent;
		currentCircle.GetComponent<Renderer>().material = drawingMaterial;
		currentCircle.transform.position = pos;

	}

	// @xiaofeng: drawing a line
	private void TouchSpaceHandle(Vector3 pos, GameObject currentLineRendererGO){
		LineRenderer currentLineRenderer = currentLineRendererGO.GetComponent<LineRenderer>();
		numOfPoints++;
		currentLineRenderer.SetVertexCount(numOfPoints);
		currentPosition = pos;
		// change from the pre-point（numOfPoints -1） to the current point！
		currentLineRenderer.SetPosition(numOfPoints-1, currentPosition);
	}
}

