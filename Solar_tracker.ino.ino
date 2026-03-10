void setup() {
#include <Servo.h>

Servo myservo;

int ldr1 = A0;
int ldr2 = A1;
int ldr3 = A2;
int ldr4 = A3;

void setup() {
  myservo.attach(9);       // adjust if your servo pin is different
  Serial.begin(9600);
}

void loop() {
  int v1 = analogRead(ldr1);
  int v2 = analogRead(ldr2);
  int v3 = analogRead(ldr3);
  int v4 = analogRead(ldr4);

  int left = (v1 + v3) / 2;
  int right = (v2 + v4) / 2;

  int pos = map(right - left, -400, 400, 0, 180);
  pos = constrain(pos, 0, 180);

  myservo.write(pos);

  delay(50);
}

}

void loop() {
  
}
