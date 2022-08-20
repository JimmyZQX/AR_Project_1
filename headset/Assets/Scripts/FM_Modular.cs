using UnityEngine;
using System;
using System.Collections;

public class FM_Modular : MonoBehaviour
{

    public enum Wave_Form
    {
        Sine, Square, Triangle, Sawtooth
    }

    public Wave_Form waveform = Wave_Form.Sine;
    public double frequency = 0;
    public float amplitude = 0;
    public GameObject synth;

    private double synth_frequency;
    private double sampling_frequency = 48000.0;
    private Synthesizer sn;

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
        // StartCoroutine(InfiniteLoop());
    }

    
    // Runs every interval of time
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
        synth_frequency = sn.get_frequency();
        phase += increment;
        sn.fm_modulation(amplitude * Math.Sin(phase) + synth_frequency);

        if (phase > (2 * Math.PI))
        {
            phase = 0.0;
        }
    }

    private void square(double increment)
    {
        synth_frequency = sn.get_frequency();
        phase += increment;
        sn.fm_modulation(amplitude * Math.Sign(Math.Sin(phase)) + synth_frequency);

        if (phase > (2 * Math.PI))
        {
            phase = 0.0;
        }
    }

    private void triangle(double increment)
    {
        synth_frequency = sn.get_frequency();

        phase += increment;
        sn.fm_modulation(amplitude * Mathf.PingPong((float)phase, 1.0f) + synth_frequency);

        if (phase > (2 * Math.PI))
        {
            phase = 0.0;
        }
    }

    private void sawtooth()
    {
        synth_frequency = sn.get_frequency();

        samplesPerWaveLength = (float)(sampling_frequency / frequency);
        ampStep = (float)((amplitude * 2) / samplesPerWaveLength);
        tempSample = -amplitude;

        for (int i = 0; i < samplesPerWaveLength; i++)
        {
            tempSample += ampStep;
            sn.fm_modulation((float)tempSample + synth_frequency);
        }
    }

}