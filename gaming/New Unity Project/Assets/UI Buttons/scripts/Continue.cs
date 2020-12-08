using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.UI.ProceduralImage;

public class Continue : MonoBehaviour
{
    public GameObject score;
    public float delay = 6;
    public GameObject close, crystal,video,notEnoughCrystals,gamePanel,RoadGen;
    public Color fade;
    bool interrupt = false;
    void Update()
    {
        if(delay<0&&!interrupt)
        {
            gotoScore();
        }
        delay -= Time.deltaTime;
    }
    public GameObject matrialManager;
    public void CharacterContinue()
    {
        float pos =0;
        //pos = GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<PlayerStatus>().MovedDistance;
        foreach (Transform child in RoadGen.transform)
        {
            if(child.gameObject.name== "DummyRoad(Clone)")
            {
                pos = child.position.z;
                break;
            }
        }
        GameObject.Find("GameManager").GetComponent<GameManager>().Startgame = false;
        GameObject.Find("GameManager").GetComponent<GameManager>().loadPlayer(pos);
        matrialManager.SetActive(true);
    }

    public void videoButton()
    {
        video.GetComponent<Button>().interactable = false;
        video.GetComponent<ProceduralImage>().color = fade;
        
        stop();
    }

    public void crystalButton()
    {
        crystal.GetComponent<Button>().interactable = false;
        crystal.GetComponent<ProceduralImage>().color = fade;
        int currentCrystal = GameObject.Find("FileHandler").GetComponent<FileHandler>().load("crystals");
        if(currentCrystal<10)
        {
            notEnoughCrystals.SetActive(true);
        }
        else
        {
            GameObject.Find("FileHandler").GetComponent<FileHandler>().save("crystals", currentCrystal-10);
            gamePanel.SetActive(true);
            CharacterContinue();
            gameObject.SetActive(false);
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
