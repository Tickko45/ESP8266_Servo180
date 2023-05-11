#include <Servo.h>

Servo servo;

void setup() {
  
    Serial.begin(115200);
    servo.attach(2);  // D4
    Serial.println("SERVO READY");
    delay(2000);

}

void loop() {
  
    servo.write(0);
    Serial.println("SERVO 0°");
    delay(1000);
    
    servo.write(90);
    Serial.println("SERVO 90°");
    delay(1000);

    servo.write(180);
    Serial.println("SERVO 180°");
    delay(1000);

    servo.write(90);
    Serial.println("SERVO 90°");
    delay(1000);

}
