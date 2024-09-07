void setup() {
  // put your setup code here, to run once:


analogWrite(16, 70);
analogWrite(0, 70);
analogWrite(1, 70);
analogWrite(8, 70);
analogWrite(7, 70);
analogWrite(11, 70);
analogWrite(10, 70);
analogWrite(9, 70);
delay(100);
analogWrite(16, 0);
analogWrite(0, 0);
analogWrite(1, 0);
analogWrite(8, 0);
analogWrite(7, 0);
digitalWrite(11, 0);
digitalWrite(10, 0);
analogWrite(9, 0);
delay(100);

analogWrite(16, 70);
analogWrite(0, 70);
analogWrite(1, 70);
analogWrite(8, 70);
analogWrite(7, 70);
analogWrite(11, 70);
analogWrite(10, 70);
analogWrite(9, 70);
delay(100);
analogWrite(16, 0);
analogWrite(0, 0);
analogWrite(1, 0);
analogWrite(8, 0);
analogWrite(7, 0);
digitalWrite(11, 0);
digitalWrite(10, 0);
analogWrite(9, 0);
delay(100);

delay(2000);

fadeUp(16, 50);
delay(1000);
fadeUp(0, 50);
delay(1000);
fadeUp(1, 50);
delay(1000);
fadeUp(8, 50);
delay(1000);
fadeUp(11, 50);
delay(1000);
fadeUp(10, 50);
delay(1000);
fadeUp(7, 50);
delay(1000);
fadeUp(9, 50);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void fadeUp(int pin, int bright) {
  for (byte i = 0; i <= bright; i++) {
    analogWrite(pin, i);
    delay(10);
  }
}