const int switchPin = 4; 
const int ledPin = 8; 
int switchState = 0; 
int n=0;
void setup()
{
    pinMode(ledPin, OUTPUT); 
    pinMode(switchPin, INPUT_PULLUP); 
}  
void loop()
{
    switchState = digitalRead(switchPin); 
    if (switchState == LOW) 
    {
      for (int i=0;i<n;i++)
      {
        digitalWrite(ledPin, HIGH);
        delay(500); 
        digitalWrite(ledPin, LOW);
        delay(500);
    }
    }
  n++;
}