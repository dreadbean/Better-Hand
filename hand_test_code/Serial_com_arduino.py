import serial
import time

arduino = serial.Serial('COM3',9600)



print("enter 1 for 180, or 0 for 0:")

while 1:
    datafrom = input()

    if datafrom == '1':
        arduino.write(b'1')
        print("done")
    elif datafrom == '0':
        arduino.write(b'0')
        print("done")
    else:
        break

