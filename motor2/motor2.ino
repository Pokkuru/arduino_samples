// ギア付きモータの制御
  void setup()
{
  pinMode(2, OUTPUT);
}

void loop()
{
   digitalWrite(2, HIGH);
   delay(800);
   digitalWrite(2, LOW);
   delay(2400);
}
