#include <Arduino.h>
#define trig_pin 9
#define echo_pin 10
void setup() {
// write your initialization code here
    pinmode(echo_pin,INPUT);
    pinmode(trig_pin,OUTPUT);
}

void loop() {
// write your code here
}