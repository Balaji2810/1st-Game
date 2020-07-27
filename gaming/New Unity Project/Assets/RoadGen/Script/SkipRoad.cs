using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkipRoad : MonoBehaviour
{
    public int RoadLength;
    public GameObject roadCube;
    public Material mainColor;
    public Material sideColor;
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
        switch(Type)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                {
                    List<int> skip = RandomList(Type, -2, 3);

                    for (int i = -2; i <= 2; i++) // x - axis
                    {
                        if(skip.Contains(i))
                        {
                            for (int length = 0; length < RoadLength; length++)    // z - axis 
                            {
                                GameObject go = Instantiate(roadCube);
                                go.transform.parent = gameObject.transform;
                                go.transform.localPosition = new Vector3(i, 0, length);
                                if ((i + length + 2) % 2 == 1)
                                {
                                    if (i == -2 || i == 2)
                                    {
                                        go.GetComponent<MeshRenderer>().material = sideColor;
                                    }
                                }
                            }
                        }
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
