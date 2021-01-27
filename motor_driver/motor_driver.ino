// ギア付きモータの制御
  void setup()
{
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  digitalWrite(7, HIGH);
}

void loop()
{
  digitalWrite(10, LOW);
  analogWrite(11, 255);

  delay(2000);
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);

  analogWrite(10, 255);
  digitalWrite(11, LOW);
  delay(2000);

  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  delay(1000);
}
