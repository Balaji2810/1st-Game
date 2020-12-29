using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class load_fame_and_gems : MonoBehaviour
{
    public string key;
    public TextMeshProUGUI text;
    private void OnEnable()
    {
        fun();
    }

    public void fun()
    {
        FileHandler file = GameObject.Find("FileHandler").GetComponent<FileHandler>();
        text.text = numberMiniFormat(file.load(key));
    }

    public string numberMiniFormat(ulong num)
    {
        string value = "0";
        if (num < 10000)
        {
            value = num + "";
        }
        else if (num < 1000000)
        {
            value = (num / 1000f).ToString("F1").Replace(".0", "") + "K";
            print(num + "  " + value);

        }
        else if (num < 1000000000)
        {
            value = (num / 1000000f).ToString("F1").Replace(".0", "") + "M";
        }
        else if (num < 1000000000000)
        {
            value = (num / 1000000000f).ToString("F1").Replace(".0", "") + "B";
        }
        else if (num < 1000000000000000)
        {
            value = (num / 1000000000000f).ToString("F1").Replace(".0", "") + "T";
        }
        else if (num < 1000000000000000000)
        {
            value = (num / 1000000000000000f).ToString("F1").Replace(".0", "") + "q";
        }
        else
        {
            value = (num / 1000000000000000000f).ToString("F1").Replace(".0", "") + "Q";
        }
        return value;
    }
}
