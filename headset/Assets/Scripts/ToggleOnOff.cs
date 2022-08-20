using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ToggleOnOff : MonoBehaviour
{
    [SerializeField] public TextMeshPro onOffText;

    public void toggle_on_off()
    {
        if (this.gameObject.active)
        {
            this.gameObject.SetActive(false);
            onOffText.text = "Off";
        }
        else
        {
            this.gameObject.SetActive(true);
            onOffText.text = "On";
        }
    }
}
