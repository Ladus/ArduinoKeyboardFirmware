#include <Keyboard.h>
////Config variables
//Matrix Setup
const int LAYERS = 2;
const int ROWS = 2;
const int COLUMNS = 2;

//Loop Delay
int delayLoopPin = 21;

//Input pins
int ColPins[COLUMNS] = {2,3};
int RowPins[ROWS] = {4,5};

////System Variables

//Default Buttons
const int NO_ACTION = 0;
const int LAYER_RAISE = 1;

//Keymap
int PressedButtons[LAYERS][ROWS][COLUMNS];
int currentLayer = 1; //1 default; 2 raised; 


void setup()
{
  setupPins();
}

void loop()
{
  delayByPin();
  switchMatrixLoop();
}

void delayByPin() {
  //If delayPin becomes low (connected to ground) then delay loop
  //implemented to stop the chip from becoming stuck in a key spamming loop
  while (digitalRead(delayLoopPin) == LOW) 
  {
    delay(8000);
  }
}
