using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FameMove : MonoBehaviour
{
    public float speed = 1;
    public float high, low;
    float left = -2, right = 2.001f;

    public ulong points=10;

    Vector2 pos;
    // Start is called before the first frame update
    void Awake()
    {
        fame.SetActive(true);
        
        getPoint();
    }

    void OnEnable()
    {
        fame.SetActive(true);

        getPoint();
    }

    void Update()
    {
        if((new Vector3(pos.x,pos.y, transform.position.z)- transform.position ).magnitude>0.15f)
        {
            goTo();
        }
        else
        {
            getPoint();
        }
    }

    void  getPoint()
    {
        pos = new Vector2(Random.Range(left, right), Random.Range(high, low));
        while ((pos - new Vector2(transform.position.x, transform.position.y)).magnitude < 2f)
        {
            pos = new Vector2(Random.Range(left, right), Random.Range(high, low));
        }
        
    }

    void goTo()
    {
        transform.position= Vector3.Lerp(transform.position, new Vector3(pos.x, pos.y, transform.position.z), speed*Time.deltaTime);
    }

    public GameObject fame, effect;
    void disable()
    {
        effect.SetActive(false);
        gameObject.SetActive(false);
    }

    private void OnTriggerEnter(Collider collision)
    {
        if(collision.gameObject.layer==14)
        {
            fame.SetActive(false);
            //Destroy(gameObject.GetComponent<BoxCollider>());
            effect.SetActive(true);
            //Destroy(gameObject, 0.75f);
            Invoke("disable", 0.75f);
            
            GameObject.Find("FileHandler").GetComponent<FileHandler>().save("fames", points+ GameObject.Find("FileHandler").GetComponent<FileHandler>().load("fames","temp"), "temp");
            GameObject.Find("GameManager").GetComponent<GameManager>().updatePoints();
        }
        else if (collision.gameObject.layer==9)
        {
            high += 1;
            low += 1;
        }
        else
        {
            transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 2);
        }
    }
}
