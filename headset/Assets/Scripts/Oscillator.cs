using UnityEngine;
using System;

public class Oscillator: MonoBehaviour
{

    public enum Wave_Form
    {
        Sine, Square, Triangle
    }

    public Wave_Form waveform = Wave_Form.Sine;
    public double frequency = 440.0;
    public double gain = 0;
    public float volume = 0.1f;

    private double increment;
    private double phase;
    private double sampling_frequency = 48000.0;

 
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            gain = volume;
        }
        if (Input.GetKeyUp(KeyCode.Space))
        {
            gain = 0;
        }
    }


    void OnAudioFilterRead(float[] data, int channels)
    {

        increment = frequency * 2 * Mathf.PI / sampling_frequency;

        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;

            if (waveform == Wave_Form.Sine)
            {
                data[i] = (float)(gain * Mathf.Sin((float)phase));
            }
            else if (waveform == Wave_Form.Square)
            {
                data[i] = (float)(gain * Mathf.Sign(Mathf.Sin((float)phase)));
            }
            else if (waveform == Wave_Form.Triangle)
            {
                data[i] = (float)(gain * (double)Mathf.PingPong((float)phase, 1.0f));
            }

            if (channels == 2)
            {
                data[i + 1] = data[i];
            }

            if (phase > (2 * Mathf.PI))
            {
                phase = 0.0;
            }
        }
    }
}