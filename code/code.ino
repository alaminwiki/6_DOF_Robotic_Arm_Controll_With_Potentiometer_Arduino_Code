#include<Servo.h>

int x1 = 0;
int x2 = 0;
int x3 = 0;
int x4 = 0;
int x5 = 0;
int x6 = 0;


Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;
Servo motor5;
Servo motor6;

void setup()
{
  motor1.attach(3);
  motor2.attach(5);
  motor3.attach(6);
  motor4.attach(9);
  motor5.attach(10);
  motor6.attach(11);
}

void loop()
{
  x1 = analogRead(A0);
  x1 = map(x1,0,1023,0,179);
  motor1.write(x1);
  delay(10);
  
  x2 = analogRead(A1);
  x2 = map(x2,0,1023,0,179);
  motor2.write(x2);
  delay(10);
  
  x3 = analogRead(A2);
  x3 = map(x3,0,1023,0,179);
  motor3.write(x3);
  delay(10);
  
  x4 = analogRead(A3);
  x4 = map(x4,0,1023,0,179);
  motor4.write(x4);
  delay(10);
  
  x5 = analogRead(A4);
  x5 = map(x5,0,1023,0,179);
  motor5.write(x5);
  delay(10);
  
  x6 = analogRead(A5);
  x6 = map(x6,0,1023,0,179);
  motor6.write(x6);
}