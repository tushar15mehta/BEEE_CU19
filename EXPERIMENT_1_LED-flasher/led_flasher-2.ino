void setup()
{
pinMode(12, OUTPUT);  //sets the digital pin as output
}

void loop()
{
digitalWrite(12,HIGH);  //turns the LED on
delay(250);  //waits for a second
digitalWrite(12,LOW);  //turns the LED off
delay(250);  //waits for a second
}
