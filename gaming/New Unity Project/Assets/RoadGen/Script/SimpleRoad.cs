using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleRoad : MonoBehaviour
{
    public GameObject roadCube;
    public Material mainColor;
    public Material sideColor;
    public int roadLength;
    public bool JumpRoad = false;
    // Start is called before the first frame update
    void Start()
    {
        
        for (int i=-2;i<=2;i++) // x - axis
        {
           for(int length=0;length<roadLength;length++)    // z - axis 
            {
                GameObject go = Instantiate(roadCube);
                go.transform.parent = gameObject.transform;
                go.transform.localPosition = new Vector3(i,0,length);
                if(JumpRoad && length==0)
                {
                    go.layer = 18; // ObstacleGround layer 18
                }
               // if((i+ length +2)%2 == 1)
                {
                    if((i==-2 || i==2)&& (10+length) % 20 == 0)
                    {
                        go.GetComponent<MeshRenderer>().material = sideColor;
                    }
                    if(length%20==0 && i==0)
                    {
                        go.GetComponent<MeshRenderer>().material = sideColor;
                    }
                    if ((i == -1 || i == 1) && (5 + length) % 20 == 0)
                    {
                        go.GetComponent<MeshRenderer>().material = sideColor;
                    }
                    if ((i == -1 || i == 1) && (15 + length) % 20 == 0)
                    {
                        go.GetComponent<MeshRenderer>().material = sideColor;
                    }


                }
            }
           
        }
    }

   
}
