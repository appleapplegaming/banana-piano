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



# ser = serial.Serial(port="/dev/ttyUSB0",baudrate=115200)

# while True:
#     for line in ser.readline():
#         print(chr(line))

#         if chr(line) == '0':
#             os.system("aplay ./wav-piano-sound/wav/c1.wav")

#         if chr(line) == '1':
#             os.system("aplay ./wav-piano-sound/wav/d1.wav")

#         if chr(line) == '2':
#             os.system("aplay ./wav-piano-sound/wav/e1.wav")

#         if chr(line) == '3':
#             os.system("aplay ./wav-piano-sound/wav/f1.wav")

# ser.close()

# playsound('wav-piano-sound/c5.mp3')
# time.sleep(0.2)
import serial

ser = serial.Serial('COM3', 9600)  # replace 'COM3' with the name of your serial port

while True:
    value = ser.readline().strip().decode('utf-8')  # read a line from the serial port and remove the line ending

    if value == "one":
        # play a note when touch sensor is touched
        playsound('banana-piano/wav-piano-sound/c5.mp3')
        print("Note played!")
    elif value == "two":
        # play a note when touch sensor is touched
        playsound('banana-piano/wav-piano-sound/a4.mp3')
        print("Note played2!")
    value=""
