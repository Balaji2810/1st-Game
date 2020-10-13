using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetObject : MonoBehaviour
{
    public GameObject go;

    GameObject temp;
    
    
    void OnEnable()
    {
        temp = Instantiate(go);
        temp.transform.parent = gameObject.transform;
        
    }

    
    void OnDisable()
    {
        Destroy(temp);
    }
}
