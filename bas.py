# #!/usr/bin/env python
# """Play a fixed frequency sound."""
# from __future__ import division
# import math
# from pyaudio import PyAudio # sudo apt-get install python{,3}-pyaudio

# try:
#     from itertools import izip
# except ImportError: # Python 3
#     izip = zip
#     xrange = range

# def sine_tone(frequency, duration, volume=1, sample_rate=22050):
#     n_samples = int(sample_rate * duration)
#     restframes = n_samples % sample_rate

#     p = PyAudio()
#     stream = p.open(format=p.get_format_from_width(1), # 8bit
#                     channels=1, # mono
#                     rate=sample_rate,
#                     output=True)
#     s = lambda t: volume * math.sin(2 * math.pi * frequency * t / sample_rate)
#     samples = (int(s(t) * 0x7f + 0x80) for t in xrange(n_samples))
#     for buf in izip(*[samples]*sample_rate): # write several samples at a time
#         stream.write(bytes(bytearray(buf)))

#     # fill remainder of frameset with silence
#     stream.write(b'\x80' * restframes)

#     stream.stop_stream()
#     stream.close()
#     p.terminate()

# sine_tone(
#     # see http://www.phy.mtu.edu/~suits/notefreqs.html
#     frequency=440.00, # Hz, waves per second A4
#     duration=0.51, # seconds to play sound
#     volume=.02, # 0..1 how loud it is
#     # see http://en.wikipedia.org/wiki/Bit_rate#Audio
#     sample_rate=22050 # number of samples per second
# )

# from pypiano import Piano
# from mingus.containers import Note

# p = Piano()

#  # Play a mingus Note
# note = Note("C-4")
# # p.play(note)

# # # Record a Note to a wav file
# p.play(note, recording_file="my_first_recording.wav", record_seconds=2)

# # Use a different instrument
# p.load_instrument("Honky-tonk Piano")
# p.play(note)
# import serial
# import os
# import time
# from playsound import playsound




# import serial

# ser = serial.Serial('COM3', 9600)  # replace 'COM3' with the name of your serial port

# while True:
#     value = ser.readline().strip().decode('utf-8')  # read a line from the serial port and remove the line ending

#     if value == "one":
#         # play a note when touch sensor is touched
#         playsound('banana-piano/wav-piano-sound/c5.mp3')
#         print("Note played!")
#     elif value == "two":
#         # play a note when touch sensor is touched
#         playsound('banana-piano/wav-piano-sound/a4.mp3')
#         print("Note played2!")
#     value=""
import serial
import threading
from playsound import playsound

ser = serial.Serial('COM3', 9600)  # replace 'COM3' with the name of your serial port

def play_sound(note):
    if note == "one":
        # play a note when touch sensor is touched
        playsound('banana-piano/wav-piano-sound/fart.mp3')#dit hoort c4 te zijn
        print("Note played!")
    elif note == "two":
        # play a note when touch sensor is touched
        playsound('banana-piano/wav-piano-sound/c-4.mp3')#dit hoort c-4 te zijn
        print("Note played2!")
    elif  note == "three":
        playsound('banana-piano/wav-piano-sound/d4.mp3')#dit hoort d4 te zijn
        print("Note played3!")
    elif  note == "four":
        playsound('banana-piano/wav-piano-sound/d-4.mp3')#d-4
        print("Note played4!")
    elif  note == "five":
        playsound('banana-piano/wav-piano-sound/e4.mp3')#e4
        print("Note played5!")
    elif  note == "six":
        playsound('banana-piano/wav-piano-sound/f4.mp3')
        print("Note played6!")
    elif  note == "seven":
        playsound('banana-piano/wav-piano-sound/f-4.mp3')
        print("Note played7!")
    elif  note == "eight":
        playsound('banana-piano/wav-piano-sound/g4.mp3')
        print("Note played8!")
    elif  note == "nine":
        playsound('banana-piano/wav-piano-sound/g-4.mp3')
        print("Note played9!")
    elif  note == "ten":
        playsound('banana-piano/wav-piano-sound/a5.mp3')
        print("Note played10!")
    elif  note == "eleven":
        playsound('banana-piano/wav-piano-sound/a-5.mp3')
        print("Note played11!")
    elif  note == "twelve":
        playsound('banana-piano/wav-piano-sound/b5.mp3')
        print("Note played12!")

def read_serial():
    while True:
        value = ser.readline().strip().decode('utf-8')  # read a line from the serial port and remove the line ending
        if value in ["one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"]:
            threading.Thread(target=play_sound, args=(value,)).start()
        value=""

# start the serial reading thread
serial_thread = threading.Thread(target=read_serial)
serial_thread.start()

# wait for the serial reading thread to finish (which should be never)
serial_thread.join()
