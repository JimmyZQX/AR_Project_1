using UnityEngine;
using System.Collections;
using TMPro;

/// <summary>
/// This script goes on the objects that you want to interact with "Pass methods to"
/// Extend to add more functionality
/// Please email me at keeling.wesley@gmail.com if you need any further help
/// </summary>
public class ControlObject : MonoBehaviour {

    [SerializeField] public GameObject waveText;
    // [SerializeField] public GameObject stateText;
    /**
    TextMeshPro ns;
    public void ToggleObject(float value)
    {
        this.gameObject.SetActive(!this.gameObject.activeSelf);

        ns = stateText.GetComponent<TextMeshPro>();
        if (this.gameObject.active)
        {
            ns.text = "On";
        }
        else
        {
            ns.text = "Off";
        }
    } */
    /**
    Synthesizer synth;
    public void SynthWave(float value)
    {
        synth = this.gameObject.GetComponent<Synthesizer>();
        ns = waveText.GetComponent<TextMeshPro>();
        if (synth.waveform == Synthesizer.Wave_Form.Sine)
        {
            synth.waveform = Synthesizer.Wave_Form.Square;
            ns.text = "Square Wave";
        }
        else if (synth.waveform == Synthesizer.Wave_Form.Square)
        {
            synth.waveform = Synthesizer.Wave_Form.Triangle;
            ns.text = "Triangle Wave";
        }
        else if (synth.waveform == Synthesizer.Wave_Form.Triangle)
        {
            synth.waveform = Synthesizer.Wave_Form.Sawtooth;
            ns.text = "Sawtooth Wave";
        }
        else if (synth.waveform == Synthesizer.Wave_Form.Sawtooth)
        {
            synth.waveform = Synthesizer.Wave_Form.Sine;
            ns.text = "Sine Wave";
        }
    }

    FM_Modular fm_modular;
    public void FMWave(float value)
    {
        fm_modular = this.gameObject.GetComponent<FM_Modular>();
        ns = waveText.GetComponent<TextMeshPro>();
        if (fm_modular.waveform == FM_Modular.Wave_Form.Sine)
        {
            fm_modular.waveform = FM_Modular.Wave_Form.Square;
            ns.text = "Square Wave";
        }
        else if (fm_modular.waveform == FM_Modular.Wave_Form.Square)
        {
            fm_modular.waveform = FM_Modular.Wave_Form.Triangle;
            ns.text = "Triangle Wave";
        }
        else if (fm_modular.waveform == FM_Modular.Wave_Form.Triangle)
        {
            fm_modular.waveform = FM_Modular.Wave_Form.Sawtooth;
            ns.text = "Sawtooth Wave";
        }
        else if (fm_modular.waveform == FM_Modular.Wave_Form.Sawtooth)
        {
            fm_modular.waveform = FM_Modular.Wave_Form.Sine;
            ns.text = "Sine Wave";
        }
    }

    AM_Modular am_modular;
    public void AMWave(float value)
    {
        am_modular = this.gameObject.GetComponent<AM_Modular>();
        ns = waveText.GetComponent<TextMeshPro>();
        if (am_modular.waveform == AM_Modular.Wave_Form.Sine)
        {
            am_modular.waveform = AM_Modular.Wave_Form.Square;
            ns.text = "Square Wave";
        }
        else if (am_modular.waveform == AM_Modular.Wave_Form.Square)
        {
            am_modular.waveform = AM_Modular.Wave_Form.Triangle;
            ns.text = "Triangle Wave";
        }
        else if (am_modular.waveform == AM_Modular.Wave_Form.Triangle)
        {
            am_modular.waveform = AM_Modular.Wave_Form.Sawtooth;
            ns.text = "Sawtooth Wave";
        }
        else if (am_modular.waveform == AM_Modular.Wave_Form.Sawtooth)
        {
            am_modular.waveform = AM_Modular.Wave_Form.Sine;
            ns.text = "Sine Wave";
        }
    } */

    public bool myBool = false;
    public void ToggleBool(float value)
    {
        myBool = !myBool;
    }

    FM_Modular fm_modular;
    public void PassFMAmplitude(float value)
    {
        fm_modular = this.gameObject.GetComponent<FM_Modular>();
        fm_modular.amplitude = value * 100;
    }

    Synthesizer synth;
    public void PassVolume(float value)
    {
        synth = this.gameObject.GetComponent<Synthesizer>();
        synth.set_volume(value);
    }

    public void PassFMFrequency(float value)
    {
        fm_modular = this.gameObject.GetComponent<FM_Modular>();
        fm_modular.frequency = value * 4000;
    }

    AM_Modular am_modular;
    public void PassAMFrequency(float value)
    {
        am_modular = this.gameObject.GetComponent<AM_Modular>();
        am_modular.frequency = value * 4000;
    }
}
