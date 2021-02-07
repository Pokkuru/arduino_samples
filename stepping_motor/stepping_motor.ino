void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  pinMode(11, OUTPUT);
}
 
void loop() {
 digitalWrite(11, HIGH);
 delay(15);
 digitalWrite(11, LOW);
 delay(15);
}
