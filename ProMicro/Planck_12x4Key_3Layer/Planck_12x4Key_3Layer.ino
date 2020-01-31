#include <Keyboard.h>
////Config variables
//Matrix Setup
const int LAYERS = 3;
const int ROWS = 4;
const int COLUMNS = 12;

//Loop Delay
const int delayLoopPin = 21;

//Input pins
const int ColPins[COLUMNS] = {6,7,8,9,10,16,14,15,18,19,20,21};
const int RowPins[ROWS] = {2,3,4,5};

////System Variables

//Default Buttons
const int NO_ACTION = 0;
const int LAYER_RAISE = 1;
const int LAYER_LOWER = 2;

//Keymap
bool switchStates[ROWS][COLUMNS];
int currentLayer = 1; //0 raised; 1 default; 2 lowered;


void setup()
{
  setupPins();
  Serial.begin(9600); 
}

void loop()
{
  delayByPin();
  switchMatrixLoop();
  delay(10);
}

void delayByPin() {
  //If delayPin becomes low (connected to ground) then delay loop
  //implemented to stop the chip from becoming stuck in a key spamming loop
  //Note: Can be removed if in need of the extra pin
  while (digitalRead(delayLoopPin) == LOW) 
  {
    delay(8000);
  }
}
