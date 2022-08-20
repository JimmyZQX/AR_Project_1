using UnityEngine;
using System;

public class AM_Modular : MonoBehaviour
{

    public enum Wave_Form
    {
        Sine, Square, Triangle, Sawtooth
    }

    public Wave_Form waveform = Wave_Form.Sine;
    public double frequency = 0;
    public GameObject synth;

    private double sampling_frequency = 48000.0;
    private Synthesizer sn;
    private double amplitude;

    private double increment;
    private double phase = 0;

    private double samplesPerWaveLength;
    private double ampStep;
    private double tempSample;
    private int totalSamplesWritten;


    // Start is called before the first frame update
    void Start()
    {
        sn = synth.GetComponent<Synthesizer>();
    }

    // Runs every frame
    void FixedUpdate()
    {
        increment = frequency * 2.0 * Math.PI / sampling_frequency;
        if (waveform == Wave_Form.Sine)
        {
            sine(increment);
        }
        else if (waveform == Wave_Form.Square)
        {
            square(increment);
        }
        else if (waveform == Wave_Form.Triangle)
        {
            triangle(increment);
        }
        else if (waveform == Wave_Form.Sawtooth)
        {
            sawtooth();
        }
    }

    private void sine(double increment)
    {
        amplitude = sn.get_volume();

        phase += increment;
        sn.am_modulation(amplitude * Math.Sin(phase));

        if (phase > (2 * Math.PI))
        {
            phase = 0.0;
        }
    }

    private void square(double increment)
    {
        amplitude = sn.get_volume();

        phase += increment;
        sn.am_modulation(amplitude * Math.Max(0, Math.Sign(Math.Sin(phase))));

        if (phase > (2 * Math.PI))
        {
            phase = 0.0;
        }
    }

    private void triangle(double increment)
    {
        amplitude = sn.get_volume();

        phase += increment;
        sn.am_modulation(amplitude * Mathf.PingPong((float)phase, 1.0f));

        if (phase > (2 * Math.PI))
        {
            phase = 0.0;
        }
    }

    private void sawtooth()
    {
        amplitude = sn.get_volume();

        samplesPerWaveLength = sampling_frequency / frequency;
        ampStep = (amplitude * 2) / samplesPerWaveLength;
        tempSample = -amplitude;

        for (int i = 0; i < samplesPerWaveLength; i++)
        {
            tempSample += ampStep;
            sn.am_modulation(tempSample);
        }
    }

}
