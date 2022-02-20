
void setup() {
  Serial.begin(115200) ;
  pinMode(PA0, INPUT) ;
  pinMode(PC13, OUTPUT) ;  
}

void loop() {
  digitalWrite(PC13, HIGH) ;
  delay(200) ; 
  digitalWrite(PC13, LOW) ;
  delay(200) ;     
//  int val = analogRead(PA0)  ;
//  Serial.println(val) ;
//  delay(1000) ;
}
