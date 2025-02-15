// Understanding and Using Servos in Projects
// we need to load servo library to work with it
#include <Servo.h>
int servoPin = 9;
int servoPos = 180;
Servo my_servo; // object named my servo

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  my_servo.attach(servoPin); // attach my object to Arduino
}

void loop() {
  // put your main code here, to run repeatedly:
  // let's get the angle from the user
  // ask
  Serial.println("What angle for the servo? : ");
  // wait
  while (Serial.available() == 0){
    //nothing
  }
  // read
  servoPos = Serial.parseInt();
  my_servo.write(servoPos);
}
