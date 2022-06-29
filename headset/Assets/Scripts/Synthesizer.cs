using UnityEngine;
using System;

public class Synthesizer : MonoBehaviour
{

    public static Synthesizer instance;

    public enum Wave_Form
    {
        Sine, Square, Triangle, Sawtooth
    }

    public Wave_Form waveform = Wave_Form.Sine;
    // public double frequency = 440.0;
    public float volume = 0.1f;

    // for sine, square and triangle
    private double increment;
    private double phase;
    private double sampling_frequency = 48000.0;

    // for sawtooth
    private double samplesPerWaveLength;
    private double ampStep;
    private double tempSample;
    private int totalSamplesWritten;


    /**
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
    */

    // Function to play the note with the right velocity
    public static void play_note(int[] message)
    {
        double gain = 0;
        double frequency;

        int on_off = message[0];
        int note_number = message[1];
        int velocity = message[2];

        if (on_off == 144)
        {
            frequency = note_frequency(note_number);
            gain = volume; // + right percentage of velocity
        }
        else
        {
            gain = 0;
        }
        Debug.Log(on_off);
    }

    double note_frequency(int note_number)
    {
        if (note_number == 60)
        {
            return 261.63;
        }
        else if (note_number == 61)
        {
            return 277.18;
        }
    }

    void OnAudioFilterRead(float[] data, int channels)
    {
        if (waveform == Wave_Form.Sine)
        {
            sine(data, channels);
        }
        else if (waveform == Wave_Form.Square)
        {
            square(data, channels);
        }
        else if (waveform == Wave_Form.Triangle)
        {
            triangle(data, channels);
        }
        else if (waveform == Wave_Form.Sawtooth)
        {
            sawtooth(data, channels);
        }
    }

    void sine(float[] data, int channels)
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

    void square(float[] data, int channels)
    {
        increment = frequency * 2 * Mathf.PI / sampling_frequency;

        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;
            data[i] = (float)(gain * Mathf.Sign(Mathf.Sin((float)phase)));

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

    void triangle(float[] data, int channels)
    {
        increment = frequency * 2 * Mathf.PI / sampling_frequency;

        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;
            data[i] = (float)(gain * (double)Mathf.PingPong((float)phase, 1.0f));

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

    void sawtooth(float[] data, int channels)
    {
        samplesPerWaveLength = (float)(sampling_frequency / (frequency / channels));
        ampStep = (float)((gain * 2) / samplesPerWaveLength);
        tempSample = -gain;
        totalSamplesWritten = 0;

        while (totalSamplesWritten < data.Length)
        {
            tempSample = -gain;

            for (int i = 0; i < samplesPerWaveLength && totalSamplesWritten < data.Length; i+=channels)
            {
                tempSample += ampStep;
                data[totalSamplesWritten] = (float)tempSample;

                if (channels == 2)
                {
                    data[totalSamplesWritten + 1] = data[totalSamplesWritten];
                }

                totalSamplesWritten += channels;
            }
        }
    }

}