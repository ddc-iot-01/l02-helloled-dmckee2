/* 
 * Project L02_05_helloLEDSIN
 * Author:David Mckee
 * Date : 6/11/2025
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */
#include "Particle.h"
#include "math.h"

const int GREENLED=D16;
float y;
// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);

void setup() {
  pinMode(GREENLED,OUTPUT);
}

// loop() runs over and over again, as quickly as it can execute.
void loop() {
  y = 127*sin(2*M_PI*(1/5.0)*millis()/1000.0)+127;
  analogWrite(GREENLED,y);

}
