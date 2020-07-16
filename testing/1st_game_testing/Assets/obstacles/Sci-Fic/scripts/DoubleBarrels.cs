using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoubleBarrels : MonoBehaviour
{
    public ReturnGameObject[] objects;
    // Start is called before the first frame update
    void Start()
    {
        GameObject go;
       
        go = Instantiate(objects[Random.Range(0, objects.Length - 1)].Object(), new Vector3(Random.Range(-2, 3), 0, 0), Quaternion.identity);
        go.transform.parent = gameObject.transform;
        go = Instantiate(objects[Random.Range(0, objects.Length)].Object(), new Vector3(Random.Range(0-2, 3), 1.5f, 0), Quaternion.identity);
        go.transform.parent = gameObject.transform;
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
