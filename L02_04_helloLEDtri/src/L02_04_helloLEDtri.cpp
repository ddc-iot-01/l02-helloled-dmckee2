/* 
 * Project LO2_04_helloLEDtri
 * Author:David Mckee
 * Date: 6/11/2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIs
#include "Particle.h"

// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);
const int BLUELED = D1;
const int REDLED = D16;
const int DELAY = 20;



// setup() runs once, when the device is first turned on
void setup() {
  // Put initialization like pinMode and begin functions here
pinMode(BLUELED,OUTPUT);
pinMode(REDLED,OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
for  ( int j=0; j <= 255 ; j++) {
     analogWrite(BLUELED,j);
     analogWrite(REDLED,255-j);
     delay(50);
    }

for (int j=255; j>=0; j--) {
    analogWrite(BLUELED,j);
    analogWrite(REDLED,255+j);
    delay(50);
  }
}

  


