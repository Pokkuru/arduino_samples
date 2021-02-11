void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(7, HIGH);
  delay(20);
}
 
void loop() {
  tone(6, 850); //普通に動く
  delay(200);
  digitalWrite(2, HIGH);
  noTone(); // 2/13に試す。駄目なら消す
  delay(800);
  //digitalWrite(7, HIGH);
  //delay(20);
  digitalWrite(2, LOW);
}
