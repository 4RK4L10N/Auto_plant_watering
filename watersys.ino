// Arduino IDE code for ARDUINO UNO activating a relay based on readings from water sensor
void setup() 
{
  digitalWrite(5, HIGH);    // important to keep the pump for getting activated during power ON/resets - DO NOT USE PIN 13
  pinMode(5, OUTPUT);       // pin on which the relay is reiciving the signal to turn ON/OFF the pump
  Serial.begin(9600);
}

void loop() 
{
  Serial.println(analogRead(A0));                           // print the value on the water-sensor
  Serial.println(map(analogRead(A0), 490, 1023, 100, 0));   // calibrate with percentages - function: map(SensorValue, WET, DRY, 100, 0);
  if (map(analogRead(A0), 490, 1023, 100, 0) < 20)          // trigger watering upon reaching lower than 20% humidity - change this for different needs
  {
    Serial.println("ON");
    digitalWrite(5, LOW);
    delay(2000);              // duration for running the pump - careful not to overflow the pot with this
    digitalWrite(5, HIGH);
    delay(60000);             // add a delay between checks to make sure the water can flow through the water up to the sensor
  }
  else
  Serial.println("OFF");
  digitalWrite(5, HIGH);
  delay(60000);
  
}
