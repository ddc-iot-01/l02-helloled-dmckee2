/* 
 * Project Lo2_01_helloLED
 * Author: David Mckee
 * Date: 6/10/2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);
const int BLUELED = D1;
const int DELAY = 1000;

// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here
pinMode (BLUELED,OUTPUT);
}

void loop() {
  digitalWrite(BLUELED,HIGH);
  delay(DELAY);
  digitalWrite(BLUELED,LOW);
  delay(DELAY);
}

