using UnityEngine;
using System.Collections;
using System.Collections.Generic;				// 使用List<T>泛型

public class TestLineDraw : MonoBehaviour {
public GameObject lineDrawPrefabs; // this is where we put the prefabs object

private bool isMousePressed;
private GameObject lineDrawPrefab;
private LineRenderer lineRenderer;
private List<Vector3> drawPoints = new List<Vector3>();


// For 多图
public Texture2D[] pics;
private int picIndex;       // 0 default
private SpriteRenderer spr;
private GameObject shape;

// Use this for initialization
void Start () {
    isMousePressed = false;

    // 初始化
    shape = GameObject.Find("shape");
    spr = shape.GetComponent<SpriteRenderer>();
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
            //Debug.Log("can do 1");
        }else{
            //Debug.Log("cannot do 1");
            // left mouse up, stop drawing
            isMousePressed = false;
            drawPoints.Clear ();
            // delete the LineRenderers when right mouse down
            // 改@03.26: 不删除！
            
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
    Rect rect = new Rect(0, 0, 1366, 685);
    void OnGUI(){
        GUI.skin.button.fontSize=Screen.height/15;
        if(GUI.Button(new Rect(Screen.width*2/5, Screen.height*8/9, Screen.width/5, Screen.height/9), "NextOne")){                    //更换为下一张图片 spr.sprite.textureRect
            //首先删除上一图的留下来的笔划
            deleteLines();
            // unity3d 更换sprite renderer中sprite的图片
            // 参见http://docs.unity3d.com/ScriptReference/Sprite.Create.html
            Sprite sp = Sprite.Create(pics[picIndex], rect,new Vector2(0.5f,0.5f)); //注意居中显示采用0.5f值
            spr.sprite = sp;
            Destroy(shape.GetComponent("PolygonCollider2D"));
            shape.AddComponent<PolygonCollider2D>();
            picIndex++;
            if(picIndex >= pics.Length){
                picIndex = 0;
            }
        }

        // 判断进行退出的按钮：
        /* Android上的退出：
        function Update () {
            if(Input.GetKey(KeyCode.Escape)){
                Application.Quit();
            }
        }
        */
    }

    // 删除“LineDraw”标记的笔划
    void deleteLines(){
        GameObject [] delete = GameObject.FindGameObjectsWithTag("LineDraw");
        int deleteCount = delete.Length;
        for(int i = deleteCount - 1; i >= 0; i--)
            Destroy(delete[i]);
    }
}