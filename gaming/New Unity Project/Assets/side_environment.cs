using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class side_environment : MonoBehaviour
{
    public float roadsize;
    public Vector2 cubeCount,cubeHeight;
    public float height, width;
    public float down;
    public GameObject cube;
    // Start is called before the first frame update
    void Start()
    {
        roadsize += 2;
        for (int i=0;i< Random.Range(cubeCount.x, cubeCount.y + 1); i++)
        {
            GameObject go = Instantiate(cube);
            go.transform.parent = transform;
            go.transform.localPosition = new Vector3(Random.Range(-width,-roadsize / 2), go.transform.localPosition.y-down, Random.Range(-height, height));
            go.transform.localScale = new Vector3(Random.Range(1f,3f), Random.Range(cubeHeight.x, cubeHeight.y), Random.Range(1f, 5f));
        }

        for (int i = 0; i < Random.Range(cubeCount.x, cubeCount.y + 1); i++)
        {
            GameObject go = Instantiate(cube);
            go.transform.parent = transform;
            go.transform.localPosition = new Vector3(Random.Range(roadsize / 2,width), go.transform.localPosition.y - down, Random.Range(-height, height));
            go.transform.localScale = new Vector3(Random.Range(1f,3f), Random.Range(cubeHeight.x, cubeHeight.y), Random.Range(1f, 5f));
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
