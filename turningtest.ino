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
return;
  
  int DelayBetweenSteps = 2000;
  int DelayAfterReset = 200;
  int SweepSteps = 80;
  int SweepTiming = 2;
  int SweepAmount = 5;
  int DelayAfterDodge = 50;
  
  // Standing
  ResetPosition();
  delay(DelayAfterReset);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  delay(DelayBetweenSteps);
  
  // Walking, running
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(1000);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(2000);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(3000);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(4000);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  // Standing dodge
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(200);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_A);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(200);
  Keyboard.set_key1(KEY_A);
  Keyboard.send_now();
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_D);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(200);
  Keyboard.set_key1(KEY_D);
  Keyboard.send_now();
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_S);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(200);
  Keyboard.set_key1(KEY_S);
  Keyboard.send_now();
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  // Running + side dodge
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(4000);
  Keyboard.set_key2(KEY_D);
  Keyboard.send_now();
  Keyboard.set_key2(0);
  Keyboard.send_now();
  delay(200);
  Keyboard.set_key2(KEY_D);
  Keyboard.send_now();
  Keyboard.set_key2(0);
  Keyboard.send_now();  
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(4000);
  Keyboard.set_key2(KEY_A);
  Keyboard.send_now();
  Keyboard.set_key2(0);
  Keyboard.send_now();
  delay(200);
  Keyboard.set_key2(KEY_A);
  Keyboard.send_now();
  Keyboard.set_key2(0);
  Keyboard.send_now();  
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  // Standing Jump
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_SPACE);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  // Running Jump
  ResetPosition();
  delay(DelayAfterReset);
  Keyboard.set_key1(KEY_W);
  Keyboard.send_now();
  delay(4000);
  Keyboard.set_key2(KEY_SPACE);
  Keyboard.send_now();
  Keyboard.set_key2(0);
  Keyboard.send_now();
  delay(DelayAfterDodge);
  Sweep(SweepAmount, SweepSteps, SweepTiming);
  Keyboard.set_key1(0);
  Keyboard.send_now();
  delay(DelayBetweenSteps);
  
  delay(10000);
}

void ResetPosition()
{
  Keyboard.set_key1(KEY_U);
  Keyboard.send_now();
  Keyboard.set_key1(0);
  Keyboard.send_now();
}

void Sweep(int speed, int samples, int mousedelay)
{
  digitalWrite(ledPin, HIGH);  
  for (int i=0; i<samples; i++) 
  {
    Mouse.move(speed, 0);
    delay(mousedelay);
  }
  digitalWrite(ledPin, LOW);
}

