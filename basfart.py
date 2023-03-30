
import serial
import threading
from playsound import playsound

ser = serial.Serial('COM3', 9600)  # replace 'COM3' with the name of your serial port

def play_sound(note):
    if note == "one":
        # play a note when touch sensor is touched
        playsound('wav-piano-sound/wet_fart_1.wav')#dit hoort c4 te zijn
        print("Note played!")
    elif note == "two":
        # play a note when touch sensor is touched
        playsound('wav-piano-sound/wet_fart_2.mp3')#dit hoort c-4 te zijn
        print("Note played2!")
    elif  note == "three":
        playsound('wav-piano-sound/wet_fart_3.wav')#dit hoort d4 te zijn
        print("Note played3!")
    elif  note == "four":
        playsound('wav-piano-sound/wet_fart_4.wav')#d-4
        print("Note played4!")
    elif  note == "five":
        playsound('wav-piano-sound/wet_fart_5.mp3')#e4
        print("Note played5!")
    elif  note == "six":
        playsound('wav-piano-sound/wet_fart_6.wav')
        print("Note played6!")
    elif  note == "seven":
        playsound('wav-piano-sound/wet_fart_7.wav')
        print("Note played7!")
    elif  note == "eight":
        playsound('wav-piano-sound/wet_fart_8.wav')
        print("Note played8!")
    elif  note == "nine":
        playsound('wav-piano-sound/wet_fart_9.wav')
        print("Note played9!")
    elif  note == "ten":
        playsound('wav-piano-sound/wet_fart_10.wav')
        print("Note played10!")
    elif  note == "eleven":
        playsound('wav-piano-sound/wet_fart_11.mp3')
        print("Note played11!")
    elif  note == "twelve":
        playsound('wav-piano-sound/wet_fart_12.mp3')
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
