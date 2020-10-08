using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class environment_generator : MonoBehaviour
{

    public GameObject sideEnv;
    PlayerStatus ps;
    public int bufferLength;
    public float length;

    float currentPos;

    // Start is called before the first frame update
    void Start()
    {
        currentPos = 0;
    }

    // Update is called once per frame
    void Update()
    {

        try
        {
            ps = GameObject.Find(PlayerPrefs.GetString("name", "player") + " Root").GetComponentInChildren<PlayerStatus>();
            if (ps.MovedDistance > currentPos - (bufferLength * length))
            {
                Spawn();
            }
        }
        catch
        {

        }
        
    }

    void Spawn()
    {
        GameObject go = Instantiate(sideEnv);
        go.transform.parent = transform;
        go.transform.localPosition = new Vector3(go.transform.localPosition.x, go.transform.localPosition.y, currentPos);
        currentPos += length;
    }
}
