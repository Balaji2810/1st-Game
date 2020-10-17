using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MentalRoad : MonoBehaviour
{

    public GameObject MentalCube;
    public int roadLength;
    public int CubesCount =10 ;

    List<int> RandomList(int n, int min, int max)
    {
        List<int> list = new List<int>();
        int temp;
        bool breaking = false;
        while (list.Count != n)
        {
            breaking = false;
            temp = Random.Range(min, max);
            if (list.Contains(temp))
            {
                continue;
            }
            foreach(int x in list)
            {
                if(Mathf.Abs(x-temp)<10)
                {
                    breaking = true;
                    continue;
                }
            }
            if(breaking)
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
        List<int> mentalCubes = RandomList(CubesCount,0, roadLength*5);
        
        GameObject go;
        for (int i = -2; i <= 2; i++) // x - axis
        {
            for (int length = 0; length < roadLength; length++)    // z - axis 
            {
                if (mentalCubes.Contains(((5*length) + 2 + i)))
                {
                   
                    go = Instantiate(MentalCube);
                    go.transform.parent = gameObject.transform;
                    go.transform.localPosition = new Vector3(i, 0, length);
                    
                    continue;
                }
                
            }

        }
    }
}
