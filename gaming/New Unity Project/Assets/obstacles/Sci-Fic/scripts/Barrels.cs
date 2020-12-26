using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class Barrels : MonoBehaviour
{
    public GameObject[] objects;
    public int Type;
    void OnEnable()
    {
        DisableBarrels();
        GameObject go;
        List<int> list1, list2;
        switch (Type)
        {
            case 1:
                go = objects[Random.Range(0, objects.Length)];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(0, 0, 0);
                go.transform.localRotation = new Quaternion(0,0,0,0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0,0,0);      
                go.SetActive(true);
                break;
            case 2:
                var n = Random.Range(0, objects.Length - 3);
                go = objects[n];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(Random.Range(-2, 3), 0, 0);
                go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                go.SetActive(true); 
                var m = Random.Range(0, objects.Length);
                while(n==m)
                {
                    m = Random.Range(0, objects.Length);
                }
                go = objects[m];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(Random.Range(-2, 3), 1.75f, 0);
                go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                go.SetActive(true);
                break;
            case 3:
                list1 = RandomList(2, 0, 6);
                list2 = RandomList(2, -2, 3);
                go = objects[list1[0]];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(list2[0], 0, 0);
                go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                go.SetActive(true);

                go = objects[list1[1]];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(list2[1], 0, 0);
                go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                go.SetActive(true);

                go = objects[Random.Range(6,objects.Length)];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(Random.Range(-2, 3), 1.75f, 0);
                go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                go.SetActive(true);
                break;
            case 4:
                list1 = RandomList(5, 0, 6);
                list2 = RandomList(5, -2, 3);
                for(int i=0;i<5;i++)
                {
                    go = objects[list1[i]];
                    go.transform.parent = gameObject.transform;
                    go.transform.localPosition = new Vector3(list2[i], 0, 0);
                    go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                    go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                    go.SetActive(true);
                }

                go = objects[Random.Range(6, objects.Length)];
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(Random.Range(-2, 3), 1.75f, 0);
                go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                go.SetActive(true);

                break;
        }
    }

    void DisableBarrels()
    {
        foreach(GameObject obj in objects)
        {
            obj.SetActive(false);
        }
    }

    List<int> RandomList(int count,int min,int max)
    {
        List<int> list = new List<int>();
        for(int i=min;i<max;i++)
        {
            list.Add(i);
        }
        list = list.OrderBy(x => Random.value).Take(count).ToList();
        return list;
    }
}
