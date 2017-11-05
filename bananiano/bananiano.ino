void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(A0) < 1000) {
    Serial.println("a");
    delay(10);
  }
  if (analogRead(A1) < 1000) {
    Serial.println("b");
    delay(10);
  }
  if (analogRead(A2) < 1000) {
    Serial.println("c");
    delay(10);
  }
  if (analogRead(A3) < 1000) {
    Serial.println("d");
    delay(10);
  }
  if (analogRead(A4) < 1000) {
    Serial.println("e");
    delay(10);
  }
}
