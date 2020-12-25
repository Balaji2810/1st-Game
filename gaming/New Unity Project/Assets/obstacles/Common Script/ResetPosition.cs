using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetPosition : MonoBehaviour
{
    public GameObject go;
    public Vector3 pos;
    public bool posBool;
    public Quaternion rot;
    public bool rotBool, setActive;
    private void OnEnable()
    {
        if(posBool)
        {
           go.transform.localPosition = pos;
        }
        if(rotBool)
        {
            go.transform.localRotation = rot;
        }
        if(setActive)
        {
            go.SetActive(true);
        }
        
    }
}
