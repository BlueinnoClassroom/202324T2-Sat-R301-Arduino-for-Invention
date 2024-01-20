void setup() {
	Serial.begin(115200);
	pinMode(11,OUTPUT);
	pinMode(7,INPUT);
	pinMode(10, OUTPUT);	
	pinMode(9, OUTPUT);
	pinMode(8, OUTPUT);
	pinMode(3, OUTPUT);
	
	//analogWrite(10, 200);	
	
}

void loop() {
	if (digitalRead(7))
	{
		digitalWrite(11, HIGH);
		digitalWrite(10, HIGH);
		digitalWrite(9, HIGH);
		digitalWrite(8, HIGH);
		delay(500);
		digitalWrite(11, LOW);
		digitalWrite(10, LOW);
		digitalWrite(9, LOW);
		digitalWrite(8, LOW);
		delay(500);
	}
	int knob;
	knob=analogRead(A0);
	
	Serial.println(knob);
	int value=map(knob,0,1023,0,255);
	analogWrite(11, value);
	analogWrite(10, value);
	int knob1;
	knob1=analogRead(A1);
	
	Serial.println(knob1);
	int value1=map(knob1,0,1023,0,255);
	analogWrite(9, value1);
	analogWrite(8, value1);
	tone (3,knob1,50);
	delay(50);
	
	
}