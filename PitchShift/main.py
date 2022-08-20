from pydub import AudioSegment


def main():
    filename = '60.wav'
    note_number = 60
    octaves = -0.25

    while note_number > 0:
        sound = AudioSegment.from_file(filename, format="wav")

        new_sample_rate = int(sound.frame_rate * (2.0 ** octaves))

        hipitch_sound = sound._spawn(sound.raw_data, overrides={'frame_rate': new_sample_rate})

        hipitch_sound = hipitch_sound.set_frame_rate(44100)

        output_name = str(note_number) + ".wav"
        hipitch_sound.export(output_name, format="wav")

        octaves -= 0.25
        note_number -= 3


    note_number = 60
    octaves = 0.25
    while note_number < 127:
        sound = AudioSegment.from_file(filename, format="wav")

        new_sample_rate = int(sound.frame_rate * (2.0 ** octaves))

        hipitch_sound = sound._spawn(sound.raw_data, overrides={'frame_rate': new_sample_rate})

        hipitch_sound = hipitch_sound.set_frame_rate(44100)

        output_name = str(note_number) + ".wav"
        hipitch_sound.export(output_name, format="wav")

        octaves += 0.25
        note_number += 3


main()

