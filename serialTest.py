import serial
import time
    
ser=serial.Serial("/dev/cu.usbmodem14201",9600) #change ACM number as found from 
ser.baudrate=9600
    
while True: 
    
    read_ser=ser.readline() 
    payload=(read_ser.rstrip()) 
    #payload.rstrip() 
    print(payload.decode('utf-8'))
    time.sleep(.250)
