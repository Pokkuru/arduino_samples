// ギア付きモータの制御
  void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);

}

void loop()
{
   analogWrite(9, 128);
   analogWrite(10, 128);
   
   delay(3000);
}
