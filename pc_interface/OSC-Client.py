from pygame import midi
from pythonosc.udp_client import SimpleUDPClient

print("Initializing midi input...")
midi.init()
default_id = midi.get_default_input_id()
midi_input = midi.Input(device_id=default_id)
print("Initialization complete")
print(midi.get_device_info(default_id))


#server_ip = "192.168.50.163"
server_ip = "127.0.0.1"
port = 7001

# create client
client = SimpleUDPClient(server_ip, port)

# ask user which instrument to use
while True:
    instrument = input("Choose your instrument: (piano / synthesizer)")
    if instrument != "piano" and instrument != "synthesizer":
        print("Not a valid answer. ")
    else:
        print("You have chosen " + instrument)
        break


# infinite loop to detect midi input, if detected, print
try:
    while True:
        if midi_input.poll():
            message = midi_input.read(num_events=16)
            print(message[0][0])
            pass_message = message[0][0]
            client.send_message("/" + instrument, pass_message)
except KeyboardInterrupt as err:
    print("Stopping...")

