using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SingleBarrel : MonoBehaviour
{
    public ReturnGameObject[] objects;
    // Start is called before the first frame update
    void Start()
    {
        GameObject go;
        
        go = Instantiate(objects[Random.Range(0, objects.Length)].Object(),transform);
        go.transform.parent = gameObject.transform;
       
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
