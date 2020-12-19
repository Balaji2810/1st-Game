using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollPosition : MonoBehaviour
{
    [Range(0,1)]
    public float position;

    void OnEnable()
    {
        Invoke("setPosition", 0.01f);
    }
    void Awake()
    {
        Invoke("setPosition", 0.01f);
    }
    void Start()
    {
        Invoke("setPosition", 0.01f);
    }

    void setPosition()
    {
        var scrollBar = GetComponent<Scrollbar>();
        scrollBar.value = position;
    }
}
