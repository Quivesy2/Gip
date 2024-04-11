int analogInPin1 = A1;
int analogInPin2 = A2;
int analogInPin3 = A3;
int analogInPin4 = A4;

int outPin1 = 8;
int outPin2 = 12;
int outPin3 = 4;
int outPin4 = 7;

void setup() {
Serial.begin(9600);

pinMode(outPin1, OUTPUT);
pinMode(outPin2, OUTPUT);
pinMode(outPin3, OUTPUT);
pinMode(outPin4, OUTPUT);

}
void loop() {

int sensorValue1 = analogRead(analogInPin1);
delay(100);

int sensorValue2 = analogRead(analogInPin2);
delay(100);

int sensorValue3 = analogRead(analogInPin3);
delay(100);

int sensorValue4 = analogRead(analogInPin4);

delay(100);

if (sensorValue2 +20 < sensorValue4 ) digitalWrite(outPin4, HIGH);
if (sensorValue2 +20 < sensorValue4 ) digitalWrite(outPin2, LOW);
if (sensorValue2 > 20 + sensorValue4 ) digitalWrite(outPin2, HIGH);
if (sensorValue2 > 20 + sensorValue4 ) digitalWrite(outPin4, LOW);
if (sensorValue1 +20 < sensorValue3 ) digitalWrite(outPin3, HIGH);
if (sensorValue1 +20 < sensorValue3 ) digitalWrite(outPin1, LOW);
if (sensorValue1 > 20 + sensorValue3 ) digitalWrite(outPin1, HIGH);
if (sensorValue1 > 20 + sensorValue3 ) digitalWrite(outPin3, LOW);
delay(500);

digitalWrite(outPin1, LOW);
digitalWrite(outPin2, LOW);
digitalWrite(outPin3, LOW);
digitalWrite(outPin4, LOW);

delay(1000);

Serial.print("Potentiometer 1=   :");
Serial.printLn(sensorValue1);
Serial.print("Potentiometer 2=   :");
Serial.printLn(sensorValue2);
Serial.print("Potentiometer 3=   :");
Serial.printLn(sensorValue3);
Serial.print("Potentiometer 4=   :");
Serial.printLn(sensorValue4);

}