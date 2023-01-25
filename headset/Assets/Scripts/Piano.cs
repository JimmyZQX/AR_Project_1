using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piano : MonoBehaviour
{

    public GameObject keyPrefab; // the prefab of the key
    public GameObject channel1; // the speaker channel 1
    public GameObject channel2; // the speaker channel 2
    private GameObject key; // used for later instantiation
    private AudioSource keyAudio; // used for later key's audio source

    private Dictionary<int, AudioSource> channel1SourceDict = new Dictionary<int, AudioSource>(); // create channel 1 dictionary to store all the audio sources
    private Dictionary<int, AudioSource> channel2SourceDict = new Dictionary<int, AudioSource>(); // create channel 2 dictionary to store all the audio sources

    public GameObject parentPiano; // itself

    private string noteName;
    private string[] noteLetters = new string[12] { "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "A#", "B" };
    private int letterPointer = 0;
    private int noteNumber = 1;
    // Start is called before the first frame update
    void Start()
    {
        for (int i = 24; i <= 107; i++) // for loop for instantiating all the notes
        {
            noteName = noteLetters[letterPointer].ToString() + noteNumber.ToString(); // specify note names
            letterPointer += 1; // counter towards an octave
            if (letterPointer > 11) // if it reaches an octave, increment the note number ex. B2 -> C3
            {
                letterPointer = 0; // set the octave key counter back
                noteNumber += 1; // update the note number
            }

            key = Instantiate(keyPrefab); // instantiate a key using created keyPrefab
            key.name = i.ToString(); // name the key its midi key name
            key.transform.SetParent(parentPiano.transform); // make the key's parent the piano
            keyAudio = key.GetComponent<AudioSource>(); // get the key's audio source
            keyAudio.clip = Resources.Load("ChoirPiano/" + noteName) as AudioClip; // store the choir piano audio to the audio source 
        }
    }

    // private List<Int16> pressedNotes = new List<Int16>();
    public void play_note(int on_off, int note, int velocity)
    {
        if (on_off == 144)
        {
            //pressedNotes.Add(note);
            // this.transform.GetChild(note - 24).GetComponent<AudioSource>().Play(); // get the corresponding note and play the audio source

            AudioSource noteSource = this.transform.GetChild(note - 24).GetComponent<AudioSource>(); // get the audio source of the note
            AudioClip noteClip = noteSource.clip; // get the audio clip of the note

            AudioSource channel1Source = channel1.AddComponent<AudioSource>(); // create audio source on channel 1
            channel1Source.clip = noteClip; // assign the note clip on the audio source in channel 1
            channel1Source.spatialBlend = 1.0f; // make the source 3D
            channel1SourceDict.Add(note, channel1Source); // store the audio source into the channel 1 dictionary

            AudioSource channel2Source = channel2.AddComponent<AudioSource>(); // create audio source on channel 2
            channel2Source.clip = noteClip; // assign the note clip on the audio source in channel 2
            channel2Source.spatialBlend = 1.0f; // make the source 3D
            channel2SourceDict.Add(note, channel2Source); // store the audio source into the channel 2 dictionary

            channel1Source.Play(); // make channel 1 source play the note clip
            Debug.Log("channel 1 playing" + note.ToString() + "/n");
            channel2Source.Play(); // make channel 2 source play the note clip
            Debug.Log("channel 2 playing" + note.ToString() + "/n");
        }
        else if (on_off == 128)
        {
            //pressedNotes.Remove(note);
            // this.transform.GetChild(note - 24).GetComponent<AudioSource>().Stop(); // get the corresponding note and stop playing its audio source

            AudioSource channel1Source = channel1SourceDict[note]; // get the corresponding channel 1 audio source
            AudioSource channel2Source = channel2SourceDict[note]; // get the corresponding channel 2 audio source

            channel1Source.Stop(); // stop the channel 1 corresponding audio source
            channel2Source.Stop(); // stop the channel 1 corresponding audio source

            channel1SourceDict.Remove(note); // remove the corresponding audio source from the channel 1 dictioary
            channel2SourceDict.Remove(note); // remove the corresponding audio source from the channel 1 dictioary

            Destroy(channel1Source); // destroy the audio source component on channel 1
            Destroy(channel2Source); // destroy the audio source component on channel 1
        }
    }
}
