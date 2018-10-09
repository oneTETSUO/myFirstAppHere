/*
 * primitive reader for analog voltage ( 5v ) and print on serial
 * created 20181011 by TET
 */

volatile int sensorValue; // direct read from pin
volatile float voltage;   // converted to a meaningful

/**
 * preparation
 */
void setup() {
  Serial.begin(9600);     // setup serial monitoring
}

/**
 * running code
 */
void loop() {
  // put your main code here, to run repeatedly:
  doSomeWork();
  delay(10);
}

/**
 * heavy load method ^^
 */
void doSomeWork(){
  sensorValue = analogRead(A0); // read the input on analog pin 0:  
  voltage = sensorValue * (5.0 / 1023.0); // Convert the analog reading to a voltage (0 - 5V)
  Serial.println(voltage);
}
