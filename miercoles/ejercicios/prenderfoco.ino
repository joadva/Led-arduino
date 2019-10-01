
int = foco;
void setup() {
  pinMode(foco, OUTPUT);
}
void loop() {
  digitalWrite(foco, HIGH);   
  delay(1000);                
  digitalWrite(foco, LOW);    
  delay(1000);                      
}

//Prender led con jhoony five uwu js :v 
/*
var five = require("johnny-five");
var board = new five.Board();

board.on("ready", function() {

  // Create a standard `led` component instance
  var led = new five.Led(13);

  // "blink" the led in 500ms
  // on-off phase periods
  led.blink(500);
});
*/ 
