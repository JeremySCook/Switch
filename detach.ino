/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep

 modified Oct 24, 2019 - Jeremy S. Cook
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {

}

void loop() {
    servo();
    delay(5000);
}
void servo(){
    myservo.attach(9);  // attaches the servo on pin 9 to the servo object
    myservo.write(60);              // tell servo to go to position in variable 'pos'
    delay(500);                       // waits 15ms for the servo to reach the positio
    myservo.write(110);              // tell servo to go to position in variable 'pos'
    delay(500);                       // waits 15ms for the servo to reach the position
    myservo.detach();
}
