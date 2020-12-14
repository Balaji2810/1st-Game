using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TapToContinue : MonoBehaviour
{
    public GameObject gamePanel;
    // Update is called once per frame
    void Update()
    {
        if(Input.GetMouseButtonDown(0))
        {
            GameObject.Find("GameManager").GetComponent<GameManager>().Startgame = true;
            gameObject.SetActive(false);
            gamePanel.SetActive(true);
            GameObject.Find(PlayerPrefs.GetString("name")).GetComponentInChildren<CharacterControl>().CanDie = true;
        }
        
    }
}
