#include <Servo.h>

#define TRIG 12
#define ECHO 11

int sensorPin = A0;
int sensorValue = 0;

Servo servo1;
Servo servo2;

void setup() {
  Serial.begin(9600);
  servo1.attach(10);
  servo2.attach(9);
  servo1.write(90);
  servo2.write(90);
  pinMode(ECHO, INPUT);
  pinMode(TRIG, OUTPUT);
}

void loop() {
  long duration;
  float distance;

  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  duration = pulseIn(ECHO, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 15) {
    servo1.write(180);
  

    sensorValue = analogRead(sensorPin);
    int mappedValue = map(sensorValue, 0, 775, 0, 1023); // Convert 0-775 to 0-1023

    Serial.print("Moisture: ");
    Serial.print(sensorValue);
    Serial.print(" | Mapped: ");
    Serial.println(mappedValue);

    if (sensorValue < 530) {
      servo2.write(180);
      delay(500);
      servo2.write(90);
    } else {
      servo2.write(0);
      delay(500);
      servo2.write(90);
    }

    delay(500);
    
  } else {
    servo1.write(0);
  }

  delay(500);
}
