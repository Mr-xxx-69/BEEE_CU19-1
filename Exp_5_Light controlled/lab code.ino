int sensorPin = A0;  
int sensorValue = 0;  

void setup() {
  pinMode(2, OUTPUT); 
  Serial.begin(9600); 
}

void loop() {
 
  sensorValue = analogRead(sensorPin);    
  Serial.println(sensorValue); 
  
  if(sensorValue < 900) 
  digitalWrite(2,HIGH); 
  
  else digitalWrite(2,LOW); 
  
  delay(100);                  
}

