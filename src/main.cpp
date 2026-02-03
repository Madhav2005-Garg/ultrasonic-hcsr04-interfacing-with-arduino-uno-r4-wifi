#include <Arduino.h>
#define trig_pin 9
#define echo_pin 10
void setup() {
    Serial.begin(9600);
// write your initialization code here
    pinMode(echo_pin,INPUT);
    pinMode(trig_pin,OUTPUT);
    Serial.println("HCSR04 started!!!!");

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
    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println("  cm");
    delay(300);
}