using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class side_environment : MonoBehaviour
{
    public float roadsize;
    public Vector2 cubeCount,cubeHeight;
    public float height, width;
    public float down;
    // Start is called before the first frame update
    void Start()
    {
        roadsize += 2;

        Transform[] trans = GetComponentsInChildren<Transform>();

        for (int i = 1; i < (int)trans.Length / 2; i++)
        {

            
            trans[i].localPosition = new Vector3(Random.Range(-width, -roadsize/2), Random.Range(cubeHeight.x, cubeHeight.y) - down, Random.Range(-height, height));

        }

        for (int i = (int)trans.Length / 2; i < trans.Length; i++)
        {

            
            trans[i].localPosition = new Vector3(Random.Range(roadsize/2, width), Random.Range(cubeHeight.x, cubeHeight.y) - down, Random.Range(-height, height));
        }
    }

    
    
}
