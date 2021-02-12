void setup() {
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(7, LOW);
}
 
void loop() {
  /*
  tone(6, 880); //普通に動く
  delay(500);
  noTone(6); // 2/13に試す。駄目なら消す
  delay(1000);
  */
  //digitalWrite(7, LOW);
  //delay(20);
  // 6ピンをHIGH, LOW切り替え
  for(int i = 0; i < 1000; i++){
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    delayMicroseconds(720);
    digitalWrite(6, LOW);
    delayMicroseconds(720);
    
  }
  //digitalWrite(7, HIGH);
  //delay(20);
}
