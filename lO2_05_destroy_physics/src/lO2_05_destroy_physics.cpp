
 * Project myProject
 * Author: Your Name
 * Date: 
 * For comprehensive documentation and examples, please visit:
 * https://docs.particle.io/firmware/best-practices/firmware-template/
 */

// Include Particle Device OS APIst initialization like pinMode and begin functions here
 
void setup() {
pinMode(GREENLED,OUTPUT);
}


// loop() runs over and over again, as quickly as it can execute.
void loop() {
  y = 127*sin(2*M_PI*(1/5.0)*millis()/1000.0)+127;
  analogWrite(GREENLED,y);

}
#include "Particle.h"
#include "math.h"

const int GREENLED=D16;
float y;
// Let Device OS manage the connection to the Particle Cloud
SYSTEM_MODE(SEMI_AUTOMATIC);



