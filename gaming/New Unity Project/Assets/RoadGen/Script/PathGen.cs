using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using RootMotion.Dynamics;

public class PathGen : MonoBehaviour
{
    public int RoadLength;
    public GameObject roadCube;
    public Material mainColor;
    public Material sideColor;
    
    int[] Bitmap(int n,int point)
    {
        int[] bitmap = new int[n];
        bitmap[point] = 1;
        if((point-1)>=0)
        {
            bitmap[point - 1] = 1;
        }
        else
        {
            if(Random.Range(0,3)!=0)
            {
                bitmap[point + 2] = 1;
            }
           
        }
        if((point+1) <n)
        {

            bitmap[point + 1] = 1;
        }
        else
        {
            if (Random.Range(0, 3) != 0)
            {
                bitmap[point - 2] = 1;
            }
        }
       
       
        return bitmap;
    }
    List<int[]> Path(int length)
    {
        List<int[]> roadBitmap = new List<int[]>();
        //int startPosition = Random.Range(0, 5);
        //roadBitmap.Add(Bitmap(5, startPosition));
        roadBitmap.Add(new int[] { 1, 1, 1, 1, 1 });
        for (int i = 0; i < length - 2; i++)
        {
            List<int> row = new List<int>();

            for (int j = 0; j < roadBitmap[roadBitmap.Count - 1].Length; j++)
            {
                if (roadBitmap[roadBitmap.Count - 1][j] == 1)
                {
                    row.Add(j);
                }
            }
           
            roadBitmap.Add(Bitmap(5, row[Random.Range(0, row.Count)]));

        }

        roadBitmap.Add(new int[] { 1, 1, 1, 1, 1 });

        return roadBitmap;
    }
    
    // Start is called before the first frame update
    void Start()
    {
      List<int[]> path = Path(RoadLength);

        for (int i = -2; i <= 2; i++) // x - axis
        {
            for (int length = 1; length < RoadLength-1; length++)    // z - axis 
            {
                if(path[length][i + 2] == 0)
                {
                    if(path[length+1][i + 2]==0 || path[length-1][i + 2]==0)
                    {
                        continue;
                    }
                    else
                    {
                       
                       
                            path[length + 1][i + 2] = 0;
                      
                            path[length - 1][i + 2] = 0;
                        
                    }
                }
            }
        }


         for (int i = -2; i <= 2; i++) // x - axis
        {
            for (int length = 0; length < RoadLength; length++)    // z - axis 
            {
                if(path[length][i+2]==1)
                {
                    GameObject go = Instantiate(roadCube);
                    go.transform.parent = gameObject.transform;
                    go.transform.localPosition = new Vector3(i, 0, length);

                    if ((i == -2 || i == 2) && (10 + length) % 20 == 0)
                    {
                        go.GetComponent<MeshRenderer>().material = sideColor;
                    }
                    if (length % 20 == 0 && i == 0)
                    {
                        go.GetComponent<MeshRenderer>().material = sideColor;
                    }
                }
                else
                {
                    var box = gameObject.AddComponent<BoxCollider>();
                    box.size = new Vector3(0.775f, 0.90f, 0.80f);
                    box.isTrigger = true;
                    box.center = box.center + new Vector3(i, 0, length);

                    

                }
                
            }

        }

    }

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.layer==14) // layer 14 puppet
        {
            
            try
            {
                PlayerStatus player = GameObject.Find(PlayerPrefs.GetString("name", "player") + " Root").GetComponentInChildren<PlayerStatus>();
                if (player.puppet.state == PuppetMaster.State.Alive)
                {
                    GameObject.Find(PlayerPrefs.GetString("name", "player") + " Root").GetComponentInChildren<CharacterControl>().DeadRagdoll();
                    
                    
                }

            }
            catch
            {
                
            }
            
        }
        
    }


}
