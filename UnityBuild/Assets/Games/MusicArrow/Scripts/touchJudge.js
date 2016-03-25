/*
(Unity)Unity判断手势触摸的类型 ，判断手势的滑动方向，并获取刚触摸以及触摸结束事的坐标
本章咱们一起来看下unity对有触摸手势做出的响应
单点触摸
Input.touchCount==1
移动触摸
Input.GetTouch(0).phase==TouchPhase.Moved
多点触摸
Input.touchCount > 1
判断两只手指至少有一只为移动触摸
Input.GetTouch(0).phase == TouchPhase.Moved || Input.GetTouch(1).phase == TouchPhase.Moved

*/

private var touchBegin = Vector2.zero;
private var touchEnd = Vector2.zero;
private var str:String;
function Start(){

}
function OnGUI(){
    if(Event.current.type == EventType.MouseDown){
        touchBegin = Event.current.mousePosition;
    }
    if(Event.current.type == EventType.MouseDrag){
        touchEnd = Event.current.mousePosition;
        if(touchEnd.x < touchBegin.x)
            str = "Toward left";
        if(touchEnd.x > touchBegin.x)
            str = "Toward right";
    }
    GUI.Label(Rect(0, 0, Screen.width, 100), "方向是： " + str);
}



/**
 * 
 * 新建一个公共方法用于判断手指的移动方向 
 * 假如是往左或者往上 则模型往各个轴的正方向位置移动 函数返回1
 * 加入是往右或者往下 则模型往各个轴的负方向位置移动 函数返回-1
 * 
 * 
function judueFinger(){
    if (Input.GetTouch(0).phase == TouchPhase.Began && startPosFlag == 1)
    {
        Debug.Log("======开始触摸=====");
        startFingerPos = Input.GetTouch(0).position;
        startPosFlag = 0;
    }
    if (Input.GetTouch(0).phase == TouchPhase.Ended)
    {
        Debug.Log("======释放触摸=====");
        startPosFlag = 1;
    }
    var nowFingerPos = Input.GetTouch(0).position;
    var xMoveDistance = Mathf.Abs(nowFingerPos.x - startFingerPos.x);
    var yMoveDistance = Mathf.Abs(nowFingerPos.y - startFingerPos.y);
    if (xMoveDistance>yMoveDistance)
    {
        if(nowFingerPos.x-startFingerPos.x>0){
            //Debug.Log("=======沿着X轴负方向移动=====");
            backValue = -1;         //沿着X轴负方向移动
        }
        else
        {
            //Debug.Log("=======沿着X轴正方向移动=====");
            backValue = 1;          //沿着X轴正方向移动
        }
    }
    else
    {
        if (nowFingerPos.y - startFingerPos.y>0)
        {
            //Debug.Log("=======沿着Y轴正方向移动=====");
            backValue = 2;         //沿着Y轴正方向移动
        }else{
            //Debug.Log("=======沿着Y轴负方向移动=====");
            backValue = -2;         //沿着Y轴负方向移动
        }
    }
    return backValue;
}
**/