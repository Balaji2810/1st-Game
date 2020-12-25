using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstaclePool : MonoBehaviour
{
    public GameObject[] obstacles;

    public void GetObstacle(string obstacleName)
    {
        
        foreach (GameObject obstacle in obstacles)
        {
            if (obstacle.name == obstacleName)
            {
                obstacle.SetActive(true);
            }
            else
            {
                obstacle.SetActive(false);
            }
        }
    }
}
