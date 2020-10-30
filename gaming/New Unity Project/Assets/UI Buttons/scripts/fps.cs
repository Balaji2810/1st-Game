using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class fps : MonoBehaviour
{
    public GameObject go;
    private void Awake()
    {
        if(PlayerPrefs.GetInt("showFPS",0)==1)
        {
            go.SetActive(true);
            
        }
        else
        {
            go.SetActive(false);
        }
    }

    private void OnEnable()
    {
        if (PlayerPrefs.GetInt("showFPS", 0) == 1)
        {
            go.SetActive(true);
        }
        else
        {
            go.SetActive(false);
        }
    }


    public Text FPS;

    int frameCount = 0;
    float dt = 0.0f;
    
    float updateRate = 4.0f;  // 4 updates per sec.

    void Update()
    {
        frameCount++;
        dt += Time.deltaTime;
        if (dt > 1.0 / updateRate)
        {
            FPS.text = ((int)(frameCount / dt)).ToString()+" FPS";
            frameCount = 0;
            dt -= 1.0f / updateRate;
        }
    }
}
