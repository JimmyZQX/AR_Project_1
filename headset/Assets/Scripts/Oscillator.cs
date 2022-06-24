using UnityEngine;
using System;

public class Oscillator: MonoBehaviour
{

    public double frequency = 440.0;
    public double gain = 0.05;
    public float volume = 0.1f;

    private double increment;
    private double phase;
    private double sampling_frequency = 48000.0;

 

    void OnAudioFilterRead(float[] data, int channels)
    {
        increment = frequency * 2 * Mathf.PI / sampling_frequency;

        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;
            data[i] = (float)(gain * Mathf.Sin((float)phase));

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