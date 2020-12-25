using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class GuardRail : MonoBehaviour
{
    public GameObject[] obj;
    public int Type;

    List<int> RandomList(int count, int min, int max)
    {
        List<int> list = new List<int>();
        for (int i = min; i < max; i++)
        {
            list.Add(i);
        }
        list = list.OrderBy(x => Random.value).Take(count).ToList();
        return list;
    }

    // Start is called before the first frame update
    void OnEnable()
    {
        var pos = new List<float>() { -2,-1,0,1,2 };
        switch (Type)
        {
            case 1:
                {
                    GameObject go;
                    CubeDiable();
                    foreach (int x in RandomList(2, 0, pos.Count))
                    {
                        go = obj[x];
                        go.transform.parent = gameObject.transform;
                        go.transform.localPosition = new Vector3(pos[x], 2, 0);
                        go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                        go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                        go.SetActive(true);
                    }
                }
                break;
            case 2:
                {
                    GameObject go;
                    CubeDiable();
                    foreach (int x in RandomList(3, 0, pos.Count))
                    {
                        go = obj[x];
                        go.transform.parent = gameObject.transform;
                        go.transform.localPosition = new Vector3(pos[x], 2, 0);
                        go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                        go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                        go.SetActive(true);
                    }
                }
                break;
            case 3:
                {
                    for(int i=0;i<5;i++)
                    {
                        GameObject go;
                        go = obj[i];
                        go.transform.parent = gameObject.transform;
                        go.transform.localPosition = new Vector3(pos[i], 2, 0);
                        go.transform.localRotation = new Quaternion(0, 0, 0, 0);
                        go.GetComponentInChildren<Rigidbody>().velocity = go.GetComponentInChildren<Rigidbody>().angularVelocity = new Vector3(0, 0, 0);
                        go.SetActive(true);
                    }
                }
                break;
            

        }
    }


    
    void CubeDiable()
    {
        foreach(GameObject go in obj)
        {
            go.SetActive(false);
        }
    }
}
