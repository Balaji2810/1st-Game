using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ObstacleGen : MonoBehaviour
{
    Collider[] roads;
    public LayerMask layer;
    public int minDistance = 15;
    AvailablePrefabs AP;
    private void Start()
    {
        AP = GameObject.Find("Available Prefabs").GetComponent<AvailablePrefabs>();
        Obstacles = AP.obstacles;
        SingleObstacles = AP.obstaclesSinglePos;
        Gen();
        Gen();
        Gen();
        StartCoroutine(obstacleGen());
    }

    public Vector2 offDistance;

    int tragetDistance = 0;

    List<GameObject> Obstacles, SingleObstacles;

    void Gen()
    {
        try
        {
            float distance = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>().MovedDistance;
            if(tragetDistance<(distance+offDistance.y))
            {
                tragetDistance += (minDistance+ UnityEngine.Random.Range(0,11));
                if(tragetDistance > (distance + offDistance.x)&& UnityEngine.Random.Range(0, 3) != 0)
                {
                    place(new Vector3(0,0, (int)tragetDistance));
                }
            }
            
        }
        catch
        {

        }
    }
    IEnumerator obstacleGen()
    {

        Gen();
        yield return new WaitForSeconds(0.7f);
        StartCoroutine(obstacleGen());
    }

    void place(Vector3 pos)
    {
        roads = Physics.OverlapBox(pos, new Vector3(5, 1, 1) / 2, Quaternion.identity, layer);

        List<string> roadString = new List<string>();
        
        foreach (Collider road in roads)
        {
            roadString.Add(road.gameObject.name);

        }

        if(roadString.Count>0)
        {
            if(roadString[0]=="road")
            {
               if( Obstacles.Count == 0)
                {
                    return;
                }

                GameObject go;
                //go = Instantiate(Obstacles[UnityEngine.Random.Range(0, Obstacles.Count)]);
                go = ObjectPooling.instance.SpawnFormPool("obstacles");
                var temp = go.GetComponent<ObstaclePool>().GetObstacle(Obstacles[UnityEngine.Random.Range(0, Obstacles.Count)].name);
                if(temp.tag == "position")
                //if (go.tag == "position")
                {
                    //temp.transform.localPosition = new Vector3(UnityEngine.Random.Range(-2,3), temp.transform.localPosition.y, temp.transform.localPosition.z);
                    go.transform.localPosition = new Vector3(UnityEngine.Random.Range(-2, 3), go.transform.localPosition.y, tragetDistance);
                }
                //go.transform.parent = transform;
                
                
            }
            else
            {
                if (SingleObstacles.Count == 0)
                {
                    return;
                }
                

                var roads = roadString.OrderBy(x => UnityEngine.Random.value).ToList<string>();

                string g = "";
                

                int obs = Mathf.Clamp(UnityEngine.Random.Range(1, roads.Count - 1),1,roads.Count);
                for(int i=0;i<obs;i++)
                {
                    GameObject go;
                    //go = Instantiate(SingleObstacles[UnityEngine.Random.Range(0, SingleObstacles.Count)]);
                    go = ObjectPooling.instance.SpawnFormPool("obstacles");
                    var temp = go.GetComponent<ObstaclePool>().GetObstacle(SingleObstacles[UnityEngine.Random.Range(0, SingleObstacles.Count)].name);


                    g += " " + roads[i];


                    switch (roads[i])
                    {
                        case "L1":
                            {
                                
                                //go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(-2, go.transform.localPosition.y, tragetDistance);
                            }
                            break;
                        case "L2":
                            {
                                
                                //go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(-1, go.transform.localPosition.y, tragetDistance);
                            }
                            break;
                        case "R1":
                            {
                                
                                //go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(2, go.transform.localPosition.y, tragetDistance);
                            }
                            break;
                        case "R2":
                            {
                               
                                //go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(1, go.transform.localPosition.y, tragetDistance);
                            }
                            break;
                        case "M":
                            {
                                
                                //go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(0, go.transform.localPosition.y, tragetDistance);
                            }
                            break;
                    }
                    go.name = "ObstaclePool(Clone) " + g;
                }


            }
        }

    }
}
