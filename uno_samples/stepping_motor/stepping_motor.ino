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
  // 6ピンをHIGH, LOW切り替え
  for(int i = 0; i < 1000; i++){
    digitalWrite(2, HIGH);
    digitalWrite(6, HIGH);
    //delayMicroseconds(800);
    delayMicroseconds(720);
    digitalWrite(6, LOW);
    //delayMicroseconds(800);
    delayMicroseconds(720);
    
  }
}
