using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallBarrel : MonoBehaviour
{
    public ReturnGameObject[] objects;
    // Start is called before the first frame update
    void Start()
    {
        GameObject go;

        for (int i = -2; i <= 2; i++)
        {
            go = Instantiate(objects[Random.Range(0, objects.Length-1)].Object());
            go.transform.parent = gameObject.transform;
            go.transform.localPosition = new Vector3(i, 0, 0);

        }

        go = Instantiate(objects[Random.Range(0, objects.Length )].Object());
        go.transform.parent = gameObject.transform;
        go.transform.localPosition = new Vector3(Random.Range(-2, 3), 1.75f, 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
