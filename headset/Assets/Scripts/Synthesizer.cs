using UnityEngine;
using System;

public class Synthesizer : MonoBehaviour
{

    public enum Wave_Form
    {
        Sine, Square, Triangle, Sawtooth
    }

    public Wave_Form waveform = Wave_Form.Sine;
    public float volume = 0.1f;

    public double frequency;
    private double original_frequency;
    private double sampling_frequency = 48000.0;
    private double amplitude = 0;
    private int on_off_num;
    private int note_count = 0;

    private double increment;
    private double phase = 0;


    // Function to play the note with the right velocity
    public void play_note(int on_off, int note_number, int velocity)
    {
        on_off_num = on_off;
        if (on_off == 144)
        {
            note_count++;
            original_frequency = note_frequency(note_number);
            frequency = original_frequency;
            amplitude = volume; // + right percentage of velocity
        }
        else if (on_off == 128)
        {
            amplitude = volume;
            note_count--;
            if (note_count == 0)
            {
                amplitude = 0;
            }
        }
        Debug.Log(on_off);
    }


    // Play sound
    private void OnAudioFilterRead(float[] data, int channels)
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

    // Sine wave
    private void sine(float[] data, int channels)
    {
        increment = frequency * 2 * Math.PI / sampling_frequency;
        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;
            data[i] = (float)(amplitude * Math.Sin(phase));

            if (channels == 2)
            {
                data[i + 1] = data[i];
            }

            if (phase > (2 * Math.PI))
            {
                phase = 0.0;
            }
        }
    }

    // Square wave 
    private void square(float[] data, int channels)
    {
        increment = frequency * 2 * Math.PI / sampling_frequency;
        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;
            data[i] = (float)(amplitude * Math.Sign(Math.Sin(phase)));

            if (channels == 2)
            {
                data[i + 1] = data[i];
            }

            if (phase > (2 * Math.PI))
            {
                phase = 0.0;
            }
        }
    }


    // Triangle wave
    private void triangle(float[] data, int channels)
    {
        increment = frequency * 2 * Math.PI / sampling_frequency;
        for (int i = 0; i < data.Length; i += channels)
        {
            phase += increment;
            data[i] = (float)(amplitude * Mathf.PingPong((float)phase, 1.0f));

            if (channels == 2)
            {
                data[i + 1] = data[i];
            }

            if (phase > (2 * Math.PI))
            {
                phase = 0.0;
            }
        }
    }


    // Sawtooth wave
    private void sawtooth(float[] data, int channels)
    {
        double samplesPerWaveLength;
        double ampStep;
        double tempSample;
        int totalSamplesWritten;

        samplesPerWaveLength = sampling_frequency / (frequency / channels);
        ampStep = (amplitude * 2) / samplesPerWaveLength;
        tempSample = -amplitude;
        totalSamplesWritten = 0;

        while (totalSamplesWritten < data.Length)
        {
            tempSample = -amplitude;

            for (int i = 0; i < samplesPerWaveLength && totalSamplesWritten < data.Length; i += channels)
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


    // Frequencies corresponding to keys 
    private double note_frequency(int note_number)
    {
        //return Math.Pow(2, (note_number - 40) / 12.0) * 440;
        
        switch (note_number)
        {
            case 0:
                return 8.18;
            case 1:
                return 8.66;
            case 2:
                return 9.18;
            case 3:
                return 9.72;
            case 4:
                return 10.30;
            case 5:
                return 10.91;
            case 6:
                return 11.56;
            case 7:
                return 12.25;
            case 8:
                return 12.98;
            case 9:
                return 13.75;
            case 10:
                return 14.57;
            case 11:
                return 15.43;
            case 12:
                return 16.35;
            case 13:
                return 17.32;
            case 14:
                return 18.35;
            case 15:
                return 19.45;
            case 16:
                return 20.60;
            case 17:
                return 21.83;
            case 18:
                return 23.12;
            case 19:
                return 24.50;
            case 20:
                return 25.96;
            case 21:
                return 27.50;
            case 22:
                return 29.14;
            case 23:
                return 30.87;
            case 24:
                return 32.70;
            case 25:
                return 34.65;
            case 26:
                return 36.71;
            case 27:
                return 38.89;
            case 28:
                return 41.20;
            case 29:
                return 43.65;
            case 30:
                return 46.25;
            case 31:
                return 49.00;
            case 32:
                return 51.91;
            case 33:
                return 55.00;
            case 34:
                return 58.27;
            case 35:
                return 61.74;
            case 36:
                return 65.41;
            case 37:
                return 69.30;
            case 38:
                return 73.42;
            case 39:
                return 77.78;
            case 40:
                return 82.41;
            case 41:
                return 87.31;
            case 42:
                return 92.50;
            case 43:
                return 98.00;
            case 44:
                return 103.83;
            case 45:
                return 110.00;
            case 46:
                return 116.56;
            case 47:
                return 123.47;
            case 48:
                return 130.81;
            case 49:
                return 138.59;
            case 50:
                return 146.83;
            case 51:
                return 155.56;
            case 52:
                return 164.81;
            case 53:
                return 174.61;
            case 54:
                return 185.00;
            case 55:
                return 196.00;
            case 56:
                return 207.65;
            case 57:
                return 220.00;
            case 58:
                return 233.08;
            case 59:
                return 246.94;
            case 60:
                return 261.63;
            case 61:
                return 277.18;
            case 62:
                return 293.66;
            case 63:
                return 311.13;
            case 64:
                return 329.63;
            case 65:
                return 349.23;
            case 66:
                return 369.99;
            case 67:
                return 392.00;
            case 68:
                return 415.30;
            case 69:
                return 440.00;
            case 70:
                return 466.16;
            case 71:
                return 493.88;
            case 72:
                return 523.25;
            case 73:
                return 554.37;
            case 74:
                return 587.33;
            case 75:
                return 622.25;
            case 76:
                return 659.25;
            case 77:
                return 698.46;
            case 78:
                return 739.99;
            case 79:
                return 783.99;
            case 80:
                return 830.61;
            case 81:
                return 880.00;
            case 82:
                return 932.33;
            case 83:
                return 987.77;
            case 84:
                return 1046.50;
            case 85:
                return 1108.73;
            case 86:
                return 1174.66;
            case 87:
                return 1244.51;
            case 88:
                return 1318.51;
            case 89:
                return 1396.91;
            case 90:
                return 1479.98;
            case 91:
                return 1567.98;
            case 92:
                return 1661.22;
            case 93:
                return 1760.00;
            case 94:
                return 1864.66;
            case 95:
                return 1975.53;
            case 96:
                return 2093.00;
            case 97:
                return 2217.46;
            case 98:
                return 2349.32;
            case 99:
                return 2489.02;
            case 100:
                return 2637.02;
            case 101:
                return 2793.83;
            case 102:
                return 2959.96;
            case 103:
                return 3135.96;
            case 104:
                return 3322.44;
            case 105:
                return 3520.00;
            case 106:
                return 3729.31;
            case 107:
                return 3951.07;
            case 108:
                return 4186.01;
            case 109:
                return 4434.92;
            case 110:
                return 4698.63;
            case 111:
                return 4978.03;
            case 112:
                return 5274.04;
            case 113:
                return 5587.65;
            case 114:
                return 5919.91;
            case 115:
                return 6271.93;
            case 116:
                return 6644.88;
            case 117:
                return 7040.00;
            case 118:
                return 7458.62;
            case 119:
                return 7902.13;
            case 120:
                return 8372.02;
            case 121:
                return 8869.84;
            case 122:
                return 9397.27;
            case 123:
                return 9956.06;
            case 124:
                return 10548.08;
            case 125:
                return 11175.30;
            case 126:
                return 11839.82;
            case 127:
                return 12543.85;
        }
        return 0;
    }


    // For AM modular
    public void am_modulation(double gain)
    {
        if (on_off_num == 144)
        {
            amplitude = gain;
        }
        else
        {
            if (note_count == 0)
            {
                amplitude = 0;
            }
        }
    }


    // For FM Modular
    public void fm_modulation(double freq)
    {
        frequency = freq;
    }


    // Returns volume of synth
    public float get_volume()
    {
        return volume;
    }


    // Returns frequency of synth
    public double get_frequency()
    {
        return original_frequency;
    }


    // Set volume of synth
    public void set_volume(float value)
    {
        this.volume = value;
    }

}