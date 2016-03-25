using UnityEngine;
using System.Collections;

public class SinglePoint : MonoBehaviour {
	public GameObject circlePointPrefab;
	public GameObject currentLineRenderer;
	public GameObject lineRendererPrefab;
	public Material drawingMaterial;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if(currentLineRenderer == null)
			currentLineRenderer = (GameObject)Instantiate(lineRendererPrefab);
		if(Input.GetMouseButtonDown(0)){
			Vector3 currentPosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
			currentPosition.z = -5.0f;
			InstantiateCirclePoint(currentPosition, currentLineRenderer.transform);
		}
	}

	// @xiaofeng: 
	private void InstantiateCirclePoint(Vector3 pos, Transform parent){
		GameObject currentCircle = (GameObject)Instantiate(circlePointPrefab);
		currentCircle.transform.parent = parent;
		currentCircle.GetComponent<Renderer>().material = drawingMaterial;
		currentCircle.transform.position = pos;

	}
}
