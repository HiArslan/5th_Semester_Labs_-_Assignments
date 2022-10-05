// Task: Reading potentiometer value
int sensor_pin = PA_5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  int value = analogRead(sensor_pin);
  //Serial.println(" ");
  Serial.print("Potentiometer Value = ");
  Serial.println(value);
  delay(1);
}
