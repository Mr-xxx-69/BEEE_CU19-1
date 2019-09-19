void setup()
{
pinMode(13, OUTPUT);  //sets the digital pin as output
}

void loop()
{
digitalWrite(13,HIGH);  //turns the LED on
delay(1000);  //waits for a second
digitalWrite(13,LOW);  //turns the LED off
delay(1000);  //waits for a second
}
