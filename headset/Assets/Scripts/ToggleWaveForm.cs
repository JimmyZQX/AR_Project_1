using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ToggleWaveForm : MonoBehaviour
{
    [SerializeField] public TextMeshPro waveFormText;
    private Synthesizer synth;
    private AM_Modular am_modular;
    private FM_Modular fm_modular;

    public void toggle_wave_form()
    {
        if ((synth = this.gameObject.GetComponent<Synthesizer>()) != null)
        {
            if (synth.waveform == Synthesizer.Wave_Form.Sine)
            {
                synth.waveform = Synthesizer.Wave_Form.Square;
                waveFormText.text = "Square Wave";
            }
            else if (synth.waveform == Synthesizer.Wave_Form.Square)
            {
                synth.waveform = Synthesizer.Wave_Form.Triangle;
                waveFormText.text = "Triangle Wave";
            }
            else if (synth.waveform == Synthesizer.Wave_Form.Triangle)
            {
                synth.waveform = Synthesizer.Wave_Form.Sawtooth;
                waveFormText.text = "Sawtooth Wave";
            }
            else if (synth.waveform == Synthesizer.Wave_Form.Sawtooth)
            {
                synth.waveform = Synthesizer.Wave_Form.Sine;
                waveFormText.text = "Sine Wave";
            }
        }
        else if ((am_modular = this.gameObject.GetComponent<AM_Modular>()) != null)
        {
            if (am_modular.waveform == AM_Modular.Wave_Form.Sine)
            {
                am_modular.waveform = AM_Modular.Wave_Form.Square;
                waveFormText.text = "Square Wave";
            }
            else if (am_modular.waveform == AM_Modular.Wave_Form.Square)
            {
                am_modular.waveform = AM_Modular.Wave_Form.Triangle;
                waveFormText.text = "Triangle Wave";
            }
            else if (am_modular.waveform == AM_Modular.Wave_Form.Triangle)
            {
                am_modular.waveform = AM_Modular.Wave_Form.Sawtooth;
                waveFormText.text = "Sawtooth Wave";
            }
            else if (am_modular.waveform == AM_Modular.Wave_Form.Sawtooth)
            {
                am_modular.waveform = AM_Modular.Wave_Form.Sine;
                waveFormText.text = "Sine Wave";
            }
        }
        else if ((fm_modular = this.gameObject.GetComponent<FM_Modular>()) != null)
        {
            if (fm_modular.waveform == FM_Modular.Wave_Form.Sine)
            {
                fm_modular.waveform = FM_Modular.Wave_Form.Square;
                waveFormText.text = "Square Wave";
            }
            else if (fm_modular.waveform == FM_Modular.Wave_Form.Square)
            {
                fm_modular.waveform = FM_Modular.Wave_Form.Triangle;
                waveFormText.text = "Triangle Wave";
            }
            else if (fm_modular.waveform == FM_Modular.Wave_Form.Triangle)
            {
                fm_modular.waveform = FM_Modular.Wave_Form.Sawtooth;
                waveFormText.text = "Sawtooth Wave";
            }
            else if (fm_modular.waveform == FM_Modular.Wave_Form.Sawtooth)
            {
                fm_modular.waveform = FM_Modular.Wave_Form.Sine;
                waveFormText.text = "Sine Wave";
            }
        }
    }
}
