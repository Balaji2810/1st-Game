using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ElectricRod : MonoBehaviour
{
    public GameObject Low,Mid,High;
    public int Type;
    float speed;
    private float maxHight,minHight;
    private bool goUp = true;
    private int spinAngle;
    // Start is called before the first frame update
    void OnEnable()
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
                            Low.SetActive(true);
                            break;
                        case 1:
                            High.SetActive(false);
                            Mid.SetActive(true);
                            Low.SetActive(false);
                            break;
                        case 2:
                            High.SetActive(true);
                            Mid.SetActive(false);
                            Low.SetActive(false);
                            break;
                    }
                }
                break;
            case 2:
                {
                    Mid.SetActive(true);
                    switch (Random.Range(0, 2))
                    {
                        case 0:
                            High.SetActive(false);
                            Low.SetActive(true);
                            break;
                        case 1:
                            High.SetActive(true);
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
                    Mid.SetActive(true);
                    Low.SetActive(false);
                    Mid.transform.position = new Vector3(Mid.transform.position.x,Random.Range(minHight,maxHight), Mid.transform.position.z);
                    speed = Random.Range(15,21);
                    StartCoroutine(Type3());
                }
                break;
            case 4:
                {
                    Mid.SetActive(false);
                    High.SetActive(false);
                    Low.SetActive(true);
                    if (Random.Range(0,2)==1)
                    {
                        spinAngle = 1;
                    }
                    else
                    {
                        spinAngle = -1;
                    }
                    RotateAngle = Random.Range(1000, 2500);
                    StartCoroutine(Type4());
                }
                break;
        }
    }

    
    IEnumerator Type3()
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

        yield return new WaitForSeconds(0.05f);
        StartCoroutine(Type3());

    }
    int RotateAngle;
    IEnumerator Type4()
    {
        Low.transform.Rotate(0, 0, RotateAngle * Time.deltaTime * spinAngle);
        yield return new WaitForSeconds(0.05f);
        StartCoroutine(Type4());
    }
}
