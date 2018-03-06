
#include <Stepper.h>

const int stepsPerRevolution = 2048; 

Stepper myStepper(stepsPerRevolution, 6, 5, 4, 3);
/*    motor wire connection
 *  
 *     red  = 5v
 *     blue = 4
 *     pink = 5
 *     org  = 6
 *     yelw = 3
 */
void setup() {
  myStepper.setSpeed(6);
  Serial.begin(9600);
}

void loop() {
  // step one revolution  in one direction:
  Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // step one revolution in the other direction:
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}

