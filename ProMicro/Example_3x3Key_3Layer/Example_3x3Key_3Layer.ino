#include <Keyboard.h>
////Config variables
//Matrix Setup
const int LAYERS = 3;
const int ROWS = 3;
const int COLUMNS = 3;

//Loop Delay
int delayLoopPin = 21;

//Input pins
int ColPins[COLUMNS] = {2,3,4};
int RowPins[ROWS] = {5,6,7};

////System Variables

//Default Buttons
const int NO_ACTION = 0;
const int LAYER_RAISE = 1;
const int LAYER_LOWER = 2;

//Keymap
bool switchStates[LAYERS][ROWS][COLUMNS];
int currentLayer = 1; //0 raised; 1 default; 


void setup()
{
  setupPins();
  Serial.begin(9600); 
}

void loop()
{
  delayByPin();
  switchMatrixLoop();
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
