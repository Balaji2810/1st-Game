using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class load_fame_and_gems : MonoBehaviour
{
    public string key;
    public Text text;
    private void OnEnable()
    {
        FileHandler file = GameObject.Find("FileHandler").GetComponent<FileHandler>();
        text.text = file.load(key).ToString();
    }
}
