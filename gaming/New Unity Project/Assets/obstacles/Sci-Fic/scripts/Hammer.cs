using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Hammer : MonoBehaviour
{
    public GameObject Left, Mid, Right;
    public int Type;
    public float speed = 1;
    private float LeftPoint, RightPoint;
    private bool goLeft = true;

    
    // Start is called before the first frame update
    void Start()
    {
        switch (Type)
        {
            case 1:
                {
                    switch (Random.Range(0, 3))
                    {
                        case 0:
                            Mid.SetActive(false);
                            Right.SetActive(false);
                            break;
                        case 1:
                            Right.SetActive(false);
                            Left.SetActive(false);
                            break;
                        case 2:
                            Mid.SetActive(false);
                            Left.SetActive(false);
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
                            break;
                        case 1:
                            Left.SetActive(false);
                            break;
                        case 2:
                            Mid.SetActive(false);
                            break;

                    }
                }
                break;
            case 3:
                {
                    RightPoint = Right.transform.position.x;
                    LeftPoint = Left.transform.position.x;
                    Right.SetActive(false);
                    Left.SetActive(false);
                    Mid.transform.position = new Vector3(Random.Range(LeftPoint, RightPoint), Mid.transform.position.y, Mid.transform.position.z);
                }
                break;

        }
    }

    // Update is called once per frame
    void Update()
    {
        switch (Type)
        {
            case 3:
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
                }
                break;
            
        }
    }
}
