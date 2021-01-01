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

    private void Awake()
    {
        StartCoroutine(fun());

    }

    private void OnEnable()
    {
        StartCoroutine(fun());

    }

   

    IEnumerator fun()
    {
        yield return new WaitForSeconds(0.01f);
        
        if (posBool )
        {
            go.transform.localPosition = pos;
            go.GetComponent<Rigidbody>().velocity = go.GetComponent<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
            
        }
        if (rotBool)
        {
            go.transform.localRotation = rot;
            go.GetComponent<Rigidbody>().velocity = go.GetComponent<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
           
        }
        if (setActive)
        {
            go.SetActive(true);
        }

        
    }
}
