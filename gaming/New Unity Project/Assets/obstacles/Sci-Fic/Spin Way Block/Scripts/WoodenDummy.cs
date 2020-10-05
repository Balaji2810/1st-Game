using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WoodenDummy : MonoBehaviour
{
    public GameObject[] GObject;
    public int Type;


    List<int> RandomList(int n,int min,int max)
    {
        List<int> list = new List<int>();
        int temp;
        while(list.Count != n)
        {
            temp = Random.Range(min, max);
            if(list.Contains(temp))
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
                {
                    foreach (int x in RandomList(GObject.Length-Type, 0, GObject.Length))
                    {
                        GObject[x].SetActive(false);
                    }
                }
                break;
            case 4:
                {
                    List<int> list = RandomList(3, 0, 3);

                    if(Random.Range(0,2)==1)
                    {
                        GObject[list[0]].SetActive(false);
                        GObject[list[1]].SetActive(false);
                        GObject[list[2]+3].SetActive(false);
                    }
                    else
                    {
                        GObject[list[0]+3].SetActive(false);
                        GObject[list[1]+3].SetActive(false);
                        GObject[list[2]].SetActive(false);
                    }
                }
                break;
            case 5:
                {
                    foreach (int x in RandomList(Random.Range(3,6), 0, GObject.Length))
                    {
                        GObject[x].SetActive(false);
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
