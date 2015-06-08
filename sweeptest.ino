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
//  return;
  
  SweepFire(10, 100, 3, 50);

  delay(10000);
}

void SweepFire(int StepAmount, int SweepSteps, int StepDelay, int FireDelay)
{  
  digitalWrite(ledPin, HIGH); 
  for (int i=0; i<SweepSteps; i++) 
  {
    if (i == FireDelay)
    {
      Mouse.set_buttons(1, 0, 0);
      Mouse.set_buttons(0, 0, 0);      
    }
    Mouse.move(StepAmount, 0);
    delay(StepDelay);
  }
  
  for (int i=0; i<SweepSteps; i++) 
  {
    Mouse.move(-StepAmount, 0);
    delay(StepDelay);
  }
  
  for (int i=0; i<=FireDelay; i++) 
  {
    Mouse.move(StepAmount, 0);
    delay(StepDelay);
  }
  digitalWrite(ledPin, LOW);
}
