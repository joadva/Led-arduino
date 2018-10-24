
void setup() {
  pinMode(foco, OUTPUT);
}
void loop() {
  digitalWrite(foco, HIGH);   
  delay(1000);                
  digitalWrite(foco, LOW);    
  delay(1000);                      
}
