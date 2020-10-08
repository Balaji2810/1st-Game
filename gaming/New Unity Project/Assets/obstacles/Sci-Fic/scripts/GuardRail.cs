using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuardRail : MonoBehaviour
{
    public GameObject obj;
    public int Type;

    List<int> RandomList(int n, int min, int max)
    {
        List<int> list = new List<int>();
        int temp;
        while (list.Count != n)
        {
            temp = Random.Range(min, max);
            if (list.Contains(temp))
            {
                continue;
            }
            list.Add(temp);
        }

        return list;
    }

    // Start is called before the first frame update
    void Start()
    {
        var pos = new List<float>() { -2,-1,0,1,2 };
        switch (Type)
        {
            case 1:
                {
                    GameObject go;
                  
                    foreach (int x in RandomList(2, 0, pos.Count))
                    {
                        go = Instantiate(obj);
                        go.transform.parent = gameObject.transform;
                        go.transform.localPosition = new Vector3(pos[x], 2, 0);
                    }
                }
                break;
            case 2:
                {
                    GameObject go;

                    foreach (int x in RandomList(3, 0, pos.Count))
                    {
                        go = Instantiate(obj);
                        go.transform.parent = gameObject.transform;
                        go.transform.localPosition = new Vector3(pos[x], 2, 0);
                    }
                }
                break;
            case 3:
                {
                    for(int i=0;i<5;i++)
                    {
                        GameObject go;
                        go = Instantiate(obj);
                        go.transform.parent = gameObject.transform;
                        go.transform.localPosition = new Vector3(pos[i], 2, 0);
                    }
                }
                break;
            

        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
