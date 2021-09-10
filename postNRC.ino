int potPin = A0;
int data;
String readString;
int minSecsBetweenEmails = 60; // 1 min
 
long lastSend = -minSecsBetweenEmails * 1000l;

void setup(){
  Serial.begin(9600);
  Serial.println("Active");
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  
}

void loop(){
  long now = millis();
  int potVal = analogRead(A0);
  Serial.print("Value: ");
  Serial.println(potVal);

  if (potVal > 1000){
      digitalWrite(3,HIGH);
     }
  
  else {
      digitalWrite(3,LOW);
     }

     if (digitalRead(potPin) > 1000 && now > (lastSend + minSecsBetweenEmails * 1000l)){
      Serial.println("OVER");
      digitalWrite(3,HIGH);
      lastSend = now;
     }
   
    
   if (potVal > 1000 && now > (lastSend + minSecsBetweenEmails * 1000l)){
      Serial.println("OVER");
      digitalWrite(3,HIGH);
      lastSend = now;
     }
 
  if (readString == "Email Sent!");
    digitalWrite(2,HIGH);

    delay(2000);
    digitalWrite(2,LOW);

  if (potVal < 1000);
    digitalWrite(3, LOW);
  
}
