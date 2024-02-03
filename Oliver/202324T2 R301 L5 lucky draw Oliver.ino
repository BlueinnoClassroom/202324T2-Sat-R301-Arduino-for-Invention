#include <Servo.h>
Servo commandq;
int number=0;

void setup() {
  commandq.attach(3);
	commandq.write(180);
	pinMode(7, INPUT);
}

void loop() {
	number = random(0,180);
	if(digitalRead(7)) {
	commandq.write(0);
	delay(500);
	commandq.write(number);
	delay(500);
	}
}