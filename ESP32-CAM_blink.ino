/*
Blink
LED blink 5 times, fast, then two slow blink
This example code is in the public domain.
xiaolaba
*/

#include "flash_light.h"  //xiaolaba, 2020-JUL-01

 
void setup() {
  // initialize the digital pin as an output.
  LED_setup();
  LED_FLASH1_setup();
}

void loop() {
  fastBlink();
  fastBlink();
  fastBlink();
  fastBlink();
  fastBlink(); 
  slowBlink();
  slowBlink();


  fastFlash();
  fastFlash();
  fastFlash();
  fastFlash();
  fastFlash();
  slowFlash();  
  slowFlash();  
  
}
