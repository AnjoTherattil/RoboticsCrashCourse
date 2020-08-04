#include <HC_SR04.h>

#define ECHO_PIN 2
#define TRIG_PIN 10
#define ECHO_INT 0

HC_SR04 distance_sensor(TRIG_PIN, ECHO_PIN, ECHO_INT);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

//begin distance sensor
distance_sensor.begin();
distance_sensor.start();
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println(distance_sensor.getRange());
 distance_sensor.start();

}
