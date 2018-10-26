
int = foco;
void setup() {
  pinMode(foco, OUTPUT);
}
void loop() {
  digitalWrite(foco, HIGH);   
  delay(4000);//mas tiempo                
  digitalWrite(foco, LOW);    
  delay(2000);     //menos tiempo                 
}
