using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoadPool : MonoBehaviour
{
    public GameObject[] roads;
    

    
    public void GetRoad(string roadName)
    {
        foreach(GameObject road in roads)
        {
            if(road.name == roadName)
            {
                road.SetActive(true);
            }
            else
            {
                road.SetActive(false);
            }
        }
    }
}
