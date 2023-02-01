/*
Jack Turner
Titus Smith
Luke Barker
*/

#include<servo.h>
    Servo serv;
int const trig = 6;
int const echo = 5;
void setup()
{
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
    serv.attach(3);
}
void loop()
{       int duration, distance;
digitalWrite(trig, HIGH);
delay(1);
digitalWrite(trig, LOW);
// Measure pulse input in echo pin
duration = pulseIn(echo, HIGH);
// Distance is half duration devided by 29.1
distance = (duration/2) / 29.1;
// if distance less than 0.5 meter and more than 0
if (distance <= 50 && distance >= 0) {
  serv.write(50);
    delay(3000);
} else {

  serv.write(160);
}
// Delay time by 60 seconds to provide a buffer
delay(60);
}﻿
