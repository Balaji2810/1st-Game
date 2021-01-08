using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

public class Continue : MonoBehaviour
{
    public GameObject score,TapToContinue;
    public float delay = 6;
    public GameObject close, crystal,video,notEnoughCrystals,RoadGen;
    public Color fade;
    bool interrupt = false;
    void Update()
    {
        if(delay<0&&!interrupt)
        {
            gotoScore();
        }
        delay -= Time.deltaTime;
        
        GameObject go;
        go = GameObject.Find(PlayerPrefs.GetString("name", null));

        if (go != null)
        {
            Destroy(go);
        }
    }

    public LayerMask layer;

    public void CharacterContinue()
    { 
        float pos =10;
        
        var temp = 1000f;
        Transform go = null;
        foreach (Transform child in RoadGen.transform)
        {
            
            if(child.gameObject.activeSelf)
            {
                var v =  GameObject.Find("GameManager").GetComponent<GameManager>().deadLocation - child.position.z;
                if (v < temp && v > 0)
                {
                    temp = v;
                    go = child;
                }


            }
        }
        Collider[] colliders = Physics.OverlapBox(new Vector3(0,0,go.position.z + pos), new Vector3(3, 3, 4),Quaternion.identity, layer);
        foreach(Collider collider in colliders)
        {
            
            if(collider.transform.parent.tag=="Obstacle")
            {
                collider.transform.parent.gameObject.SetActive(false);
            }
        }
        GameObject.Find("GameManager").GetComponent<GameManager>().Startgame = false;
        GameObject.Find("GameManager").GetComponent<GameManager>().loadPlayer(go.position.z+pos);
        GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().SpeedMod = 3;
        TapToContinue.SetActive(true);
        gameObject.SetActive(false);

        
    }

    public void videoButton()
    {
        video.GetComponent<Button>().interactable = false;
        video.GetComponent<ProceduralImage>().color = fade;     
        stop();
        GameObject.Find("ADManager").GetComponent<ADManager>().ShowRewardVideo(1);
    }

    public void crystalButton()
    {
        crystal.GetComponent<Button>().interactable = false;
        crystal.GetComponent<ProceduralImage>().color = fade;
        ulong currentCrystal = GameObject.Find("FileHandler").GetComponent<FileHandler>().load("crystals");
        if(currentCrystal<10)
        {
            notEnoughCrystals.SetActive(true);
        }
        else
        {
            GameObject.Find("FileHandler").GetComponent<FileHandler>().save("crystals", currentCrystal-10);
            
            CharacterContinue();
            
        }
        stop();
    }

    public void stop()
    {
        //count.SetActive(false);
        close.SetActive(true);
        interrupt = true;
    }

    public void gotoScore()
    {
        score.SetActive(true);
        gameObject.SetActive(false);
    }
}
