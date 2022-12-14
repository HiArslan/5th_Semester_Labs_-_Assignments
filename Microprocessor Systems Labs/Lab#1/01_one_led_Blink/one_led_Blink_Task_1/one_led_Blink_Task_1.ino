
// most launchpads have a red LED
#define LED RED_LED // Red led 
//see pins_energia.h for more LED definitions
//#define LED GREEN_LED
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED, OUTPUT); // Red led as output    
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
