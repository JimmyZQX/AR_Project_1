from pygame import midi
from pythonosc.udp_client import SimpleUDPClient

print("Initializing midi input...")
midi.init()
default_id = midi.get_default_input_id()
midi_input = midi.Input(device_id=default_id)
print("Initialization complete")
print(midi.get_device_info(default_id))


server_ip = "192.168.50.163"
port = 7001

# create client
client = SimpleUDPClient(server_ip, port)

# infinite loop to detect midi input, if detected, print
try:
    while True:
        if midi_input.poll():
            message = midi_input.read(num_events=16)
            print(message[0][0])
            pass_message = message[0][0]
            client.send_message("/message/address", pass_message)
except KeyboardInterrupt as err:
    print("Stopping...")

