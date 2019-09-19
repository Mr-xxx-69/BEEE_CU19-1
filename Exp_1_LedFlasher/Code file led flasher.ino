void setup()
{
pinMode(13, OUTPUT);  //sets the digital pin as output
}

void loop()
{
digitalWrite(12,HIGH);  //turns the LED on
delay(500);  //waits for a second
digitalWrite(12,LOW);  //turns the LED off
delay(500);  //waits for a second
}
