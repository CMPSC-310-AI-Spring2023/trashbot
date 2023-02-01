/*
Jack Turner
Titus Smith
Luke Barker
*/

#include<servo.h>
    Servo servo;
int const trigPin = 6;
int const echoPin = 5;
void setup()
{
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
    servo.attach(3);
}
void loop()
{       int duration, distance;
digitalWrite(trigPin, HIGH);
delay(1);
digitalWrite(trigPin, LOW);
// Measure pulse input in echo pin
duration = pulseIn(echoPin, HIGH);
// Distance is half duration devided by 29.1
distance = (duration/2) / 29.1;
// if distance less than 0.5 meter and more than 0
if (distance <= 50 && distance >= 0) {
  servo.write(50);
    delay(3000);
} else {

  servo.write(160);
}
// Delay time by 60 seconds to provide a buffer 
delay(60);
}﻿

