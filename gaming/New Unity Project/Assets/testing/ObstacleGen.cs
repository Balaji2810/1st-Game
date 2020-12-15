using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class ObstacleGen : MonoBehaviour
{
    Collider[] roads;
    public LayerMask layer;
    AvailablePrefabs AP;
    private void Start()
    {
        AP = GameObject.Find("Available Prefabs").GetComponent<AvailablePrefabs>();
        Obstacles = AP.obstacles;
        SingleObstacles = AP.obstaclesSinglePos;
    }

    public Vector2 offDistance;

    int tragetDistance = 0;

    List<GameObject> Obstacles,SingleObstacles;
    // Update is called once per frame
    void FixedUpdate()
    {
        try
        {
            float distance = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>().MovedDistance;
            if(tragetDistance<(distance+offDistance.y))
            {
                tragetDistance += (15+Random.Range(0,11));
                if(tragetDistance > (distance + offDistance.x)&& Random.Range(0, 3) != 0)
                {
                    place(new Vector3(0,0,tragetDistance));
                }
            }
            
        }
        catch
        {

        }
        //place();
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
                go = Instantiate(Obstacles[Random.Range(0, Obstacles.Count)]);
                go.transform.parent = transform;
                go.transform.localPosition = new Vector3(go.transform.localPosition.x, go.transform.localPosition.y, tragetDistance);
            }
            else
            {
                if (SingleObstacles.Count == 0)
                {
                    return;
                }

                var roads = roadString.OrderBy(x => Random.value).ToList<string>();

                int obs = Mathf.Clamp(Random.Range(1, roads.Count - 1),1,roads.Count);
                for(int i=0;i<obs;i++)
                {
                    switch(roads[i])
                    {
                        case "L1":
                            {
                                GameObject go;
                                go = Instantiate(SingleObstacles[Random.Range(0, SingleObstacles.Count)]);
                                Destroy(go.GetComponent<position>());
                                go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(-2, 4, tragetDistance);
                            }
                            break;
                        case "L2":
                            {
                                GameObject go;
                                go = Instantiate(SingleObstacles[Random.Range(0, SingleObstacles.Count)]);
                                Destroy(go.GetComponent<position>());
                                go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(-1, 4, tragetDistance);
                            }
                            break;
                        case "R1":
                            {
                                GameObject go;
                                go = Instantiate(SingleObstacles[Random.Range(0, SingleObstacles.Count)]);
                                Destroy(go.GetComponent<position>());
                                go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(2, 4, tragetDistance);
                            }
                            break;
                        case "R2":
                            {
                                GameObject go;
                                go = Instantiate(SingleObstacles[Random.Range(0, SingleObstacles.Count)]);
                                Destroy(go.GetComponent<position>());
                                go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(1, 4, tragetDistance);
                            }
                            break;
                        case "M":
                            {
                                GameObject go;
                                go = Instantiate(SingleObstacles[Random.Range(0, SingleObstacles.Count)]);
                                Destroy(go.GetComponent<position>());
                                go.transform.parent = transform;
                                go.transform.localPosition = new Vector3(0, 4, tragetDistance);
                            }
                            break;
                    }
                }


            }
        }

    }
}
