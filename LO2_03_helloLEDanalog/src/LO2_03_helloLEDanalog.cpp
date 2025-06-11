/* 
 * Project L02_03_helloLEDanalog
 * Author: David Mckee
 * Date: 6/11/2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
//header constant are defined here to be used globally
SYSTEM_MODE(AUTOMATIC);
// "constant int" is used to define which output we are using
const int BLUELED = D1;
// const int defines a constant ti be used globally
const int DELAY = 5000; 

// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here
pinMode (BLUELED,OUTPUT);
}
// loop() runs over and over again, as quickly as it can execute.
void loop() {
analogWrite(BLUELED,255);
delay(DELAY);
analogWrite(BLUELED,63);
delay(DELAY);
analogWrite(BLUELED,171);
delay(DELAY);
analogWrite(BLUELED,16);
delay(DELAY);
}
