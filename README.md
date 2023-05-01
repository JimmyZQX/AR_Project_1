# AR Jam

Welcome to AR Jam, an Oculus Quest mixed reality software for playing keyboard-based musical instruments and collaborating with other musicians. 

# Introduction
AR Jam is a mixed reality software built for instrumental playing and collaboration. 
To try it out, first download the newest build from the headset_builds folder and use SideQuest to sideload the file onto your Oculus Quest (1 or 2) headset. Then, connect a MIDI keyboard to your computer. 
You will then need to run the Python file OSC-client in the pc_interface directory, and run AR Jam on the headset at the same time. The Python file will ask which instrument you would like to choose. After making a decision, simply wear your headset, play something on the keyboard, interact with the virtual controls, and enjoy the game!


# Design
On the non-networking level (running on one VR headset, single user), the structure of “AR Jam” can be seen in Figure 4. A USB cable connects the piano keyboard to a computer, where a small Python program is run. The program receives the MIDI signal when a key is pressed/released and, using network protocols to transmit the MIDI Signal to the headset. One of the instruments running in “AR Jam” receives the signal, and from the signal extract the key pressed/released, the strength the player uses to press the key, and the status of the key (pressing or releasing). The AR instrument currently running will then play/unplay the pitch specified by the MIDI signal. The VR headset, while doing all the above tasks, is also keeping track of the player’s head and hand movements. This makes it possible for the player to manipulate in-game objects and instruments (turning them on/off, adjusting the timbre). Being a networked application, “AR Jam” also sends all of the information to other headsets so multiple players can play the game at the same time. Each player has the same exact setup when using "AR Jam."

# Developers
This project uses Unity to setup the mixed reality environment that runs on the headset. All the Unity files can be found in the headset directory. Some of the latest builds for testing the software can be found in the headset_builds directory. The file that runs on the computer is a Python program. It is a relatively simple program that does the job.

# Suggestions on Further Developments
If you have ideas on what should be added or changed, please feel free to contact me at qz003@bucknell.edu and we can work on the project together!
The synthesizer in this software calculuates 18000 samples each second. This is too much for the majority of VR headsets to handle. To change this, different methods of synthesis need to be implemented to substitute the traditional method. One method that I would suggest is wave table synthesis, a method in which waves are pregenerated for the oscillators to play sound from. This method ensures that no calculation is done over and over again.
Running the computer program is a hustle. Why would the user want to pull out an extra computer if there are already two devices that are required to run AR Jam? There should be a way to implement an even smaller program, one only runs on a very small device or is built into a MIDI keyboard. One method to implement this is to write a program on an Arduino board. It is easily attachable to MIDI keyboards and it can have only one function, which is to send the MIDI message to the headset. This makes the implementation of the wireless MIDI transmission more seemless.
