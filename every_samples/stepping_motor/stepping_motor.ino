void setup() {
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}
 
void loop() {
  // 6ピンをHIGH, LOW切り替え
  for(int i = 0; i < 1000; i++){
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
    delayMicroseconds(720);
    digitalWrite(4, LOW);
    delayMicroseconds(720);
  }
   digitalWrite(5, HIGH);
   delay(2000);
   digitalWrite(5, LOW);
}
