int ledPin = 13;
void setup() 
{
  pinMode(ledPin, OUTPUT);
  
  digitalWrite(ledPin, HIGH);  
  delay(2000);
  digitalWrite(ledPin, LOW); 
}

void loop() 
{  
  // Mouse only goes to -127 to 127
  
  return;
  
  for (int i = 1; i < 7; i++)
  {
    SweepLeftAndRight(i * 10, 1);  
    delay(1000);
  }
  
  for (int i = 1; i < 7; i++)
  {
    SweepLeftAndRight(i * 10, 2);  
    delay(1000);
  }
  
  delay(10000);
}

void SweepLeftAndRight(int speed, int returnmultiplier)
{
  int Samples = 40;
  int i;
  
  digitalWrite(ledPin, HIGH);  
  for (i=0; i<Samples; i++) 
  {
    Mouse.move(speed * returnmultiplier, 0);
  }
  for (i=0; i<Samples * returnmultiplier; i++) 
  {
    Mouse.move(-speed, 0);
  }
  Mouse.set_buttons(1, 0, 0);
  Mouse.set_buttons(0, 0, 0);
  digitalWrite(ledPin, LOW);
}

