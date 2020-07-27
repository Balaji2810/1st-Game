using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TripleBarrels : MonoBehaviour
{
    public ReturnGameObject[] objects;
    // Start is called before the first frame update
    void Start()
    {
        if (Random.Range(0, 3) != 0)
        {
            int p1 = Random.Range(-2, 3);
            int p2 = Random.Range(-2, 3);

            while (p2 == p1)
            {
                p2 = Random.Range(-2, 3);
            }

            GameObject go;

            for (int i = -2; i <= 2; i++)
            {
                if (i == p1 || i == p2)
                {
                    continue;
                }
                go = Instantiate(objects[Random.Range(0, objects.Length)].Object());
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(i, 0, 0);

            }
        }
        else
        {
            int p1 = Random.Range(-2, 3);
            int p2 = Random.Range(-2, 3);

            while (p2 == p1)
            {
                p2 = Random.Range(-2, 3);
            }

            GameObject go;

            go = Instantiate(objects[Random.Range(0, objects.Length-1)].Object());
            go.transform.parent = gameObject.transform;
            go.transform.localPosition = new Vector3(p1, 0, 0);

           go = Instantiate(objects[Random.Range(0, objects.Length-1)].Object());
            go.transform.parent = gameObject.transform;
            go.transform.localPosition = new Vector3(p2, 0, 0);

            if (Random.Range(0,2)==1)
            {
                go = Instantiate(objects[Random.Range(0, objects.Length)].Object());
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(p1, 1.5f, 0);
            }
            else
            {
                go = Instantiate(objects[Random.Range(0, objects.Length)].Object());
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(p2, 1.5f, 0);
            }
        }

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
