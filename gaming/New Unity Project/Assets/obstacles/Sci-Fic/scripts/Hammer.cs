using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hammer : MonoBehaviour
{
    public GameObject Left, Mid, Right;
    public int Type;
    float speed;
    private float LeftPoint, RightPoint;
    private bool goLeft = true;

    
    // Start is called before the first frame update
    void OnEnable()
    {
        switch (Type)
        {
            case 1:
                {
                    switch (Random.Range(0, 3))
                    {
                        case 0:
                            Right.SetActive(true);
                            Mid.SetActive(false);
                            Left.SetActive(false);
                            break;
                        case 1:
                            Right.SetActive(false);
                            Mid.SetActive(true);
                            Left.SetActive(false);
                            break;
                        case 2:
                            Right.SetActive(false);
                            Mid.SetActive(false);
                            Left.SetActive(true);
                            break;
                    }
                }
                break;
            case 2:
                {
                    switch (Random.Range(0, 3))
                    {
                        case 0:
                            Right.SetActive(false);
                            Mid.SetActive(true);
                            Left.SetActive(true);
                            break;
                        case 1:
                            Right.SetActive(true);
                            Mid.SetActive(true);
                            Left.SetActive(false);
                            break;
                        case 2:
                            Right.SetActive(true);
                            Mid.SetActive(false);
                            Left.SetActive(true);
                            break;

                    }
                }
                break;
            case 3:
                {
                    RightPoint = Right.transform.position.x;
                    LeftPoint = Left.transform.position.x;
                    Right.SetActive(false);
                    Mid.SetActive(true);
                    Left.SetActive(false);
                    Mid.transform.position = new Vector3(Random.Range(LeftPoint, RightPoint), Mid.transform.position.y, Mid.transform.position.z);
                    speed = Random.Range(10, 20);
                    StartCoroutine(Type3());
                }
                break;

        }
    }


    IEnumerator Type3()
    {
        
        if (Mid.transform.position.x >= RightPoint)
        {
            goLeft = true;

        }

        if (Mid.transform.position.x <= LeftPoint)
        {
            goLeft = false;

        }

        if (goLeft)
        {
            Mid.transform.position = Vector3.MoveTowards(Mid.transform.position, new Vector3( LeftPoint, Mid.transform.position.y, Mid.transform.position.z), speed * Time.deltaTime);
        }
        else
        {
            Mid.transform.position = Vector3.MoveTowards(Mid.transform.position, new Vector3( RightPoint, Mid.transform.position.y, Mid.transform.position.z), speed * Time.deltaTime);
        }
               
        yield return new WaitForSeconds(0.05f);
        StartCoroutine(Type3());
    }
}
