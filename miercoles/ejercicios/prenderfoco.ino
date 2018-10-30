int Rojo = 9; //PIN PWM
int Verde = 10; //PIN PWM
int Azul = 11; //PIN PWM

//DECLARAMOS LOS POTENCIOMETROS

int pot1 = A0;
int pot2 = A1;
int pot3 = A2;

int valor1 = 0;
int valor2 = 0;
int valor3 = 0;

float r;
float g;
float b;

void setup() 
{
  pinMode(Rojo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Azul, OUTPUT);
  Serial.begin(9600); //USAREMOS LECTURA SERIAL A FRECUENCIA DE 9600
}


void loop() 
{
  valor1 = analogRead(pot1);
  valor2 = analogRead(pot2);
  valor3 = analogRead(pot3);

  float limitador = (float) 255/1023; //Divimos el valor max del color entre el valor max del potenciometro

  r = limitador * valor1;
  g = limitador * valor2;
  b = limitador * valor3;
  
  setColor(r, g, b);
}

void setColor(int rojoV, int verdeV, int azulV)
{
  analogWrite(Rojo, rojoV);
  analogWrite(Verde, verdeV);
  analogWrite(Azul, azulV);
}
