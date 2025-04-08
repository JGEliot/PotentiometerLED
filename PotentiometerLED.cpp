
// the setup routine runs once when you press reset:
int LED=2; //initialise variable for LED to correspond with Digital Port 2
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // initialise digital pin LED_BUILTIN as an output.
  pinMode (LED, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);  // delay in between reads for stability
  while (sensorValue >= 400) // detect when the potentiometer reaches a certain threshold and enable the LED
  {
  digitalWrite(LED, HIGH);
  }
  }
