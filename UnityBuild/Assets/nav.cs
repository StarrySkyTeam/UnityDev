using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System;

public class nav : MonoBehaviour
{
    private int arg = -1;

    // Use this for initialization
    void Start()
    {
        arg = Convert.ToInt16(UnityEngine.WSA.Application.arguments);
        Debug.Log(arg);
    }

    void OnGUI()
    {

        if (arg != -1)
        {
            SceneManager.LoadSceneAsync(arg);
        }
        else {

            if (GUILayout.Button("画个圈圈诅咒坏蛋"))
            {
                //Application.LoadLevel("Games/DrawShape/DrawShape");
                SceneManager.LoadSceneAsync(1);
            }
            if (GUILayout.Button("把路飞拼出来"))
            {
                //Application.LoadLevel("Games/PinTu/Resources/PinTu");
                SceneManager.LoadSceneAsync(2);

            }
            if (GUILayout.Button("打死臭地鼠"))
            {
                //Application.LoadLevel("Games/DaDiShu/DaDiShu");
                SceneManager.LoadSceneAsync(3);

            }
            if (GUILayout.Button("向左向右滑"))
            {
                //Application.LoadLevel("Games/MusicArrow/MusicArrow");
                SceneManager.LoadSceneAsync(4);

            }

        }

    }
}
