using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstaclePool : MonoBehaviour
{
    public GameObject[] obstacles;

    public GameObject GetObstacle(string obstacleName)
    {
        GameObject go = null;
        foreach (GameObject obstacle in obstacles)
        {
            if (obstacle.name == obstacleName)
            {
                obstacle.SetActive(true);
                go = obstacle;
            }
            else
            {
                obstacle.SetActive(false);
            }
        }
        return go;
    }
}
