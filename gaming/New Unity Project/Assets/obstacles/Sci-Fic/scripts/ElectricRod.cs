using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElectricRod : MonoBehaviour
{
    public GameObject Low,Mid,High;
    public int Type;
    public float speed=1, RotateAngle=1;
    private float maxHight,minHight;
    private bool goUp = true;
    private int spinAngle;
    // Start is called before the first frame update
    void Start()
    {
    switch(Type)
        {
            case 1:
                {
                    switch (Random.Range(0, 3))
                    {
                        case 0:
                            Mid.SetActive(false);
                            High.SetActive(false);
                            break;
                        case 1:
                            High.SetActive(false);
                            Low.SetActive(false);
                            break;
                        case 2:
                            Mid.SetActive(false);
                            Low.SetActive(false);
                            break;
                    }
                }
                break;
            case 2:
                {
                    switch (Random.Range(0, 2))
                    {
                        case 0:
                            High.SetActive(false);
                            break;
                        case 1:
                            Low.SetActive(false);
                            break;
                        
                    }
                }
                break;
            case 3:
                {
                    maxHight = High.transform.position.y;
                    minHight = Low.transform.position.y;
                    High.SetActive(false);
                    Low.SetActive(false);
                    Mid.transform.position = new Vector3(Mid.transform.position.x,Random.Range(minHight,maxHight), Mid.transform.position.z);
                }
                break;
            case 4:
                {
                    Mid.SetActive(false);
                    High.SetActive(false);
                    if(Random.Range(0,2)==1)
                    {
                        spinAngle = 1;
                    }
                    else
                    {
                        spinAngle = -1;
                    }
                }
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        switch(Type)
        {
            case 3:
                {
                    if (Mid.transform.position.y >= maxHight)
                    {
                        goUp = false;
                        
                    }

                    if (Mid.transform.position.y <= minHight)
                    {
                        goUp = true;
                        
                    }

                    if (goUp)
                    {
                        Mid.transform.position = Vector3.MoveTowards(Mid.transform.position, new Vector3(Mid.transform.position.x, maxHight, Mid.transform.position.z), speed * Time.deltaTime);
                    }
                    else
                    {
                        Mid.transform.position = Vector3.MoveTowards(Mid.transform.position, new Vector3(Mid.transform.position.x, minHight, Mid.transform.position.z), speed * Time.deltaTime);
                    }
                }
                break;
            case 4:
                {
                    Low.transform.Rotate(0, 0, RotateAngle*Time.deltaTime* spinAngle);
                }
                break;
        }

    }
}
