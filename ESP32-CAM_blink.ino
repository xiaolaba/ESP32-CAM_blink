/*
Blink
LED blink 5 times, fast, then two slow blink
This example code is in the public domain.
xiaolaba
*/

//#define NodeMCU-32S 1
#define ESP32-CAM 1


#ifdef NodeMCU-32S
  //2017-07-17 ESP32 testing, NodeMCU-32S broad
  //xiaolaba
  #define led 2
  #define Flash_led 2 // dummy, for easy coding only, 2020-07-01, ESP32-CAM testing
#endif


#ifdef ESP32-CAM
  //2020-07-01, ESP32-CAM testing
  //LED1 = GPIO33
  //Flash_LED = GPIO4
  #define led 33
  #define Flash_led 4
#endif

 
void setup() {
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(Flash_led, OUTPUT);
}
 
void fastBlink () {
  digitalWrite(led, HIGH); // set the LED on
  digitalWrite(Flash_led, HIGH); // set the LED on
  delay(200); // wait for a second
  digitalWrite(led, LOW); // set the LED off
  digitalWrite(Flash_led, LOW); // set the LED off
  delay(200); // wait for a second
}
 
void slowBlink () {
  digitalWrite(led, HIGH); // set the LED on
  digitalWrite(Flash_led, HIGH); // set the LED on
  delay(1000); // wait for a second
  digitalWrite(led, LOW); // set the LED off
  digitalWrite(Flash_led, LOW); // set the LED off
  delay(1000); // wait for a second
}
 
void loop() {
  fastBlink();
  fastBlink();
  fastBlink();
  fastBlink();
  fastBlink();
   
  slowBlink();
  slowBlink();
}
