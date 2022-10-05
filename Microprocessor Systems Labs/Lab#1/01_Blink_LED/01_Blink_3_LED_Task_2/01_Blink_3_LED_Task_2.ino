
// Task-2
// Defining led's
#define LED1 RED_LED
#define LED2 BLUE_LED
#define LED3 GREEN_LED
void setup() {                
  // initialize the digital pin as an output
  pinMode(LED1 , OUTPUT); // LED1 as o/p
  pinMode(LED2 , OUTPUT); // LED2 as o/p
  pinMode(LED3 , OUTPUT); // LED3 as o/p
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED1, HIGH);          // First red led will be high
  delay(1000);                      // Then wait a sec
  digitalWrite(LED1, LOW);         // Then red led will be low
  delay(1000);                    // Then wait a sec
  digitalWrite(LED2 , HIGH);     // Blue led high
  delay(1000);                  // Then wait a sec
  digitalWrite(LED2 , LOW);    // Then Blue led will be low
  delay(1000);                // Then wait a sec
  digitalWrite(LED3, HIGH);  //Green led will be high
  delay(1000);              // Then wait a sec
  digitalWrite(LED3, LOW); //  Green led will be low
  delay(1000);            // Then wait a sec
}
