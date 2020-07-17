using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GuardRail : MonoBehaviour
{
    public GameObject Left, Mid, Right;
    public int Type;
   
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
            

        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
