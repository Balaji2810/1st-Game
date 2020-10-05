using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WoodenBlock : MonoBehaviour
{
    public GameObject[] GObject;
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
            if(n>=4)
            {
                List<int> tempList = new List<int>(list);
                tempList.Add(temp);
                if (tempList.Contains(0) && tempList.Contains(2) && tempList.Contains(3) && tempList.Contains(5))
                {
                    continue;
                }
               
            }
            list.Add(temp);
        }

        return list;
    }
    // Start is called before the first frame update
    void Start()
    {
        switch (Type)
        {
            case 1:
            case 2:
            case 3:
            case 4:
                {
                    foreach (int x in RandomList(1 + Type, 0, GObject.Length))
                    {
                        GObject[x].SetActive(true);
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
