int potPin = A0;

int minSecsBetweenEmails = 5;

long lastSend = -minSecsBetweenEmails * 1000l;

void setup()
{
  //pinMode(potPin, INPUT);
  Serial.begin(9600);
  Serial.println("Active");
}

void loop()
{
  long now = millis();
  if (analogRead(potPin) >= 500)
  {
    if (now > (lastSend + minSecsBetweenEmails * 1000l))
    {
      Serial.println("Over 500");
      Serial.println("Send");
      lastSend = now;
    }
    else
    {
      Serial.println("Under 500");
    }
  }
  delay(500);
}
