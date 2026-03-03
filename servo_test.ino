#include <Servo.h>

Servo myServo;  // Create a servo object

void setup() {
    myServo.attach(9);  // Attach servo to pin 9
    myServo.write(0);
    delay(1000); 
    // // Move servo to 90 degrees
     myServo.write(90);
    // delay(2000); 
    // // Move servo to 90 degrees
    // myServo.write(180);  // Move servo to 90 degrees
    // delay(2000);  
    // // Move servo to 90 degrees
    // myServo.write(45);  // Move servo to 90 degrees
    // delay(2000);  // Move servo to 90 degrees
}

void loop() {
    // Nothing to do in loop
}
