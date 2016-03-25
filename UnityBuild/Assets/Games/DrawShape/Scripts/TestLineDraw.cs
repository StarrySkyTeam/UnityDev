using UnityEngine;
using System.Collections;
using System.Collections.Generic;				// 使用List<T>泛型

public class TestLineDraw : MonoBehaviour {
public GameObject lineDrawPrefabs; // this is where we put the prefabs object

private bool isMousePressed;
private GameObject lineDrawPrefab;
private LineRenderer lineRenderer;
private List<Vector3> drawPoints = new List<Vector3>();

// Use this for initialization
void Start () {
    isMousePressed = false;
}

// Update is called once per frame
void Update () {
    if(Input.GetMouseButtonDown(1))
    {
        // delete the LineRenderers when right mouse down
        GameObject [] delete = GameObject.FindGameObjectsWithTag("LineDraw");
        int deleteCount = delete.Length;
        for(int i = deleteCount - 1; i >= 0; i--)
            Destroy(delete[i]);
    }

    if(Input.GetMouseButtonDown(0))
    {
        // left mouse down, make a new line renderer
        isMousePressed = true;
        lineDrawPrefab = GameObject.Instantiate(lineDrawPrefabs) as GameObject;
        lineRenderer = lineDrawPrefab.GetComponent<LineRenderer>();
        lineRenderer.SetVertexCount(0);
    }else if(Input.GetMouseButtonUp(0))
    {
        // left mouse up, stop drawing
        isMousePressed = false;
        drawPoints.Clear ();
    }

    // @xiaofeng: 笔画越界检测
    if(Input.GetMouseButton(0)){
        // @xiaofeng: 检测是否处于Polygon Collider中
        // For 2D Colliders you need use Physics2D and RaycastHit2D instead of Physics
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit2D hit = Physics2D.Raycast(ray.origin, ray.direction);
        
        if (hit!=null && hit.collider != null)
        {
            Debug.Log("can do 1");
        }else{
            Debug.Log("cannot do 1");
            // left mouse up, stop drawing
            isMousePressed = false;
            drawPoints.Clear ();
            // delete the LineRenderers when right mouse down
            GameObject [] delete = GameObject.FindGameObjectsWithTag("LineDraw");
            int deleteCount = delete.Length;
            for(int i = deleteCount - 1; i >= 0; i--)
                Destroy(delete[i]);
        }
    }

    if(isMousePressed)
    {
        // when the left mouse button pressed
        // continue to add vertex to line renderer
        Vector3 mousePosCurrent = Input.mousePosition;
        // new a Vector3 to avoid draw in the camara z-face;
        Vector3 mousePos = Camera.main.ScreenToWorldPoint(new Vector3(mousePosCurrent.x, mousePosCurrent.y, 0 - Camera.main.transform.position.z));
        if (!drawPoints.Contains (mousePos)) 
        {
            drawPoints.Add (mousePos);
            lineRenderer.SetVertexCount (drawPoints.Count);
            lineRenderer.SetPosition(drawPoints.Count - 1, mousePos);
        }
    }
}
}