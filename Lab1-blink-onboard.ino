void setup() {
  // setup pin outputs
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {

  digitalWrite(LED_BUILTIN, HIGH);   
  delay(250);                       
  digitalWrite(LED_BUILTIN, LOW);    
  delay(250);                       
}
