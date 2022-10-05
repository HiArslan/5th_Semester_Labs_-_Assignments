int led = GREEN_LED; // Bulit in green led
int buttonpin = PUSH1; // Tiva C own Pushbutton#1
void setup() {
  // put your setup code here, to run once:
  pinMode(led , OUTPUT); 
  pinMode(buttonpin , INPUT_PULLUP); // 
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_state = digitalRead(buttonpin); // Reading the state of button which can be 0 or 1
  if (button_state == HIGH){
    digitalWrite(led , LOW);
  }
  else {
    digitalWrite(led , HIGH);
  }
}
