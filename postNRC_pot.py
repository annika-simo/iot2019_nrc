import time
import serial
import smtplib

TO = 'asimovart7@gmail.com'
GMAIL_USER = 'asimovart7@gmail.com'
GMAIL_PASS = 'jongosi7'
SUBJECT = 'Chicken pot.py'
TEXT = 'Look it worked :)'
  
ser = serial.Serial('/dev/cu.usbmodem14201', 9600)

def send_email():
    print("Sending Email")
    smtpserver = smtplib.SMTP("smtp.gmail.com",587)
    smtpserver.ehlo()
    smtpserver.starttls()
    smtpserver.ehlo
    smtpserver.login(GMAIL_USER, GMAIL_PASS)
    header = 'To:' + TO + '\n' + 'From: ' + GMAIL_USER
    header = header + '\n' + 'Subject:' + SUBJECT + '\n'
    print (header)
    msg = header + '\n' + TEXT + ' \n\n'
    smtpserver.sendmail(GMAIL_USER, TO, msg)
    smtpserver.close()
    print("Email Sent!")
    exit()
    
while True:
    status = ser.readline()
    print(status)
    if (status[0] == 'O' and status[0] != 'A' or 'V'):
        send_email()
    time.sleep(0.5)
    
