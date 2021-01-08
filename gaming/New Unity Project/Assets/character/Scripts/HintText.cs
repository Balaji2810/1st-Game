using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;


public class HintText : MonoBehaviour
{
    
    [SerializeField]
    [TextArea(5, 20)]
    string[] hint;
    public bool isMain = true;
    // Start is called before the first frame update
    void Start()
    {
        if(isMain)
        {
            if(PlayerPrefs.GetInt("hints",0)<4)
            {
                PlayerPrefs.SetInt("hints", PlayerPrefs.GetInt("hints", 0) + 1);
                GetComponent<TextMeshPro>().SetText(hint[0]);
            }
            else
            {
                GetComponent<TextMeshPro>().SetText(hint[Random.Range(0, hint.Length)]);
            }
        }
        else
        {
            GetComponent<TextMeshPro>().SetText(hint[Random.Range(0, hint.Length)]);
        }
        
    }

}
