int led = GREEN_LED;
int led_1 = RED_LED;
int buttonpin = PUSH1;
int buttonpin_1 = PUSH2;
void setup() {
  // put your setup code here, to run once:
  pinMode(led , OUTPUT);
  pinMode(buttonpin , INPUT_PULLUP);
  pinMode(led_1 , OUTPUT);
  pinMode(buttonpin_1 , INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_state = digitalRead(buttonpin);
  int button_state_1 = digitalRead(buttonpin_1);
  if (button_state == HIGH){
    digitalWrite(led , LOW);
  }
  else {
    digitalWrite(led , HIGH);
  }
  if (button_state_1 == HIGH){
    digitalWrite(led_1 , LOW); 
  }
  else {
    digitalWrite(led_1 , HIGH);
  }
}
