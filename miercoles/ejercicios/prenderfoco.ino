
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


//la forma para tirarlo en JS con framwork jonny five es 

/*
const {Board, Led} = require("johnny-five");
const board = new Board();

board.on("ready", () => {
  const led = new Led(13);

  // This will grant access to the led instance
  // from within the REPL that's created when
  // running this program.
  board.repl.inject({
    led
  });

  led.blink();
});


*/
