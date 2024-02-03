#include <Servo.h>
Servo HELLO;
int number=0;
void setup() {
	HELLO.attach(3);
	HELLO.write(0);
	pinMode(7,INPUT);
}

void loop() { 
	number = random(0, 180);
	if(digitalRead(7)){
		HELLO.write(0);
		delay(1000);
		HELLO.write(number);
		delay(1000);
	}
}