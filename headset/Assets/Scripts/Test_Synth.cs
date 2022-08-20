/*
using UnityEngine;
using System;
// using System.Windows.Media;



public class Test_Synth : MonoBehaviour
{

    public enum Wave_Form
    {
        Sine, Square, Triangle, Sawtooth
    }

    public Wave_Form waveform = Wave_Form.Sine;
    public float volume = 0.1f;

    private const int sampling_frequency = 48000;
    private const short BITS_PER_SAMPLE = 16;


    // Function to play the note with the right velocity
    public void play_note(int on_off, int note_number, int velocity)
    {
        float gain;
        float frequency;

        if (on_off == 144)
        {
            frequency = note_frequency(note_number);
            gain = volume; // + right percentage of velocity
            KeyDown(frequency, gain);
        }
        else
        {
            KeyDown(0, 0);
        }
        Debug.Log(on_off);
    }

    // When key is pressed
    private void KeyDown(float frequency, float gain)
    {
        short[] wave = new short[sampling_frequency];
        byte[] binaryWave = new byte[sampling_frequency * sizeof(short)];
        // float frequency = 440f;
        sine(wave, binaryWave, frequency, gain, 1);
    }

    // Sine wave
    private void sine(short[] wave, byte[] binaryWave, float frequency, float gain, int channels)
    {
        double increment;
        double phase;

        increment = frequency * 2 * Mathf.PI / sampling_frequency;

        for (int i = 0; i < wave.Length; i += channels)
        {
            phase += increment;
            wave[i] = Convert.ToInt16(gain * Mathf.Sin((float)phase));

            if (channels == 2)
            {
                wave[i + 1] = wave[i];
            }

            if (phase > (2 * Mathf.PI))
            {
                phase = 0.0;
            }
        }
        Buffer.BlockCopy(wave, 0, binaryWave, 0, wave.Length * sizeof(short));
        using (MemoryStream memoryStream = new MemoryStream())
        using (BinaryWriter bianryWriter = new BinaryWriter(memoryStream))
        {
            int blockAlign = BITS_PER_SAMPLE / 8;
            int subChunkTwoSize = sampling_frequency * blockAlign;
            bianryWriter.Write(new[] { 'R', 'I', 'F', 'F' });
            bianryWriter.Write(36 + subChunkTwoSize);
            bianryWriter.Write(new[] { 'W', 'A', 'V', 'E', 'f', 'm', 't', ' ' });
            bianryWriter.Write(16);
            bianryWriter.Write((short)1);
            bianryWriter.Write((short)1);
            bianryWriter.Write(sampling_frequency);
            bianryWriter.Write(sampling_frequency * blockAlign);
            bianryWriter.Write(blockAlign);
            bianryWriter.Write(BITS_PER_SAMPLE);
            bianryWriter.Write(new[] { 'd', 'a', 't', 'a' });
            bianryWriter.Write(subChunkTwoSize);
            binaryWriter.Write(binaryWave);
            memoryStream.Position = 0;
            new SoundPlayer(memoryStream).Play();
        }

    }

    // Frequencies corresponding to keys 
    private float note_frequency(int note_number)
    {
        return (float)(Math.Pow(2, (note_number - 40) / 12.0) * 440);
    }

    /*
    // Square wave 
    void square(float[] data, int channels)
    {
        private double increment;
        double phase;
        double sampling_frequency = 48000.0;

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

    // Triangle wave
    void triangle(float[] data, int channels)
    {
        double increment;
        double phase;
        double sampling_frequency = 48000.0;

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

    // Sawtooth wave (sounds weird)
    void sawtooth(float[] data, int channels)
    {
        double samplesPerWaveLength;
        double ampStep;
        double tempSample;
        int totalSamplesWritten;

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


*/