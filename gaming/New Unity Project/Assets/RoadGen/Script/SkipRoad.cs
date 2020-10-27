using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkipRoad : MonoBehaviour
{
    
    public GameObject[] roadCube;
    

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
        
        List<int> skip = RandomList(Type, 0, 5);

        for (int i = 0; i <= 4; i++)
        {
            if(skip.Contains(i))
            {
                roadCube[i].SetActive(true);
            }
        }
               
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
