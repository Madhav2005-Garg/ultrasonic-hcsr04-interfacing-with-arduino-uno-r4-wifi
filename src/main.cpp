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
    digitalWrite(trig_pin,HIGH);
    delayMicroseconds(2);
    digitalWrite(trig_pin,LOW);
    delayMicroseconds(2);
    digitalWrite(trig_pin,HIGH);
    delayMicroseconds(10);
    digitalWrite(trig_pin,LOW);
    long duration=pulseIn(echo_pin,HIGH);
    long distance=0.343*duration/2;
    serial.print("Distance: ");
    serial.print(distance);
    serial.print("  cm");
    delay(1000);
}