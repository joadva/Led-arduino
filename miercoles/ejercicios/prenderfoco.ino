
int = foco;
void setup() {
  pinMode(foco, OUTPUT);
}
void loop() {
  digitalWrite(foco, HIGH);   
  delay(3000); Tiempo en milisegundos               
  digitalWrite(foco, LOW);    
  delay(2000); dos segundos                      
}
