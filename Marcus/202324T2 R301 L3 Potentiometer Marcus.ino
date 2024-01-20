void setup() {
	Serial.begin(115200);
	void setup() {
	Serial.begin(115200);
	
pinMode(13, OUTPUT);
pinMode(11, OUTPUT);	
pinMode(7, INPUT);	
pinMode(5, INPUT);		
	analogWrite(11, 200);
}

void loop() {
	if(digitalRead(7))
	{
digitalWrite(13, HIGH);
	delay(500);
digitalWrite(13, LOW);
	delay(500);
		digitalWrite(5, HIGH);
	delay(500);
digitalWrite(5, LOW);
	delay(500);
	}
	
	
	int knob;
	knob=analogRead(A5);
	Serial.println(knob);
	
	
	
	
	
	
	int value;
	value=map(knob, 0, 1023, 0, 255);
	analogWrite(11, value);
	analogWrite(5, value);
	analogWrite(13, value);
}
pinMode(13, OUTPUT);
pinMode(11, OUTPUT);	
pinMode(7, INPUT);	
pinMode(5, INPUT);		
	analogWrite(11, 200);
}

void loop() {
	if(digitalRead(7))
	{
digitalWrite(13, HIGH);
	delay(500);
digitalWrite(13, LOW);
	delay(500);
		digitalWrite(5, HIGH);
	delay(500);
digitalWrite(5, LOW);
	delay(500);
	}
	
	
	int knob;
	knob=analogRead(A5);
	Serial.println(knob);
	
	
	
	
	
	
	int value;
	value=map(knob, 0, 1023, 0, 255);
	analogWrite(11, value);
	analogWrite(5, value);
	analogWrite(13, value);
}