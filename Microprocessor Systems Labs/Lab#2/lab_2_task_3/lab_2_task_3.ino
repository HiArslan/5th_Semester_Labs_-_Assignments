// Control two leds with one pushbutton
int led = GREEN_LED;
int led_1 = RED_LED;
int buttonpin = PUSH1;
void setup() {
  // put your setup code here, to run once:
  pinMode(led , OUTPUT);
  pinMode(buttonpin , INPUT_PULLUP);
  pinMode(led_1 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int button_state = digitalRead(buttonpin);
  if (button_state == LOW){
    digitalWrite(led , LOW);
    digitalWrite(led_1 , HIGH);

     delay(650);
    digitalWrite(led , HIGH);
    digitalWrite(led_1 , LOW); 
    delay(650);
  }
  if (button_state == HIGH){
        digitalWrite(led , LOW); 
        digitalWrite(led_1 , LOW); 
  }
}
