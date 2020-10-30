using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class Continue : MonoBehaviour
{
    public TextMeshProUGUI TEXT;
    public void ChangeText(string text)
    {
        TEXT.text = text;
    }
}
