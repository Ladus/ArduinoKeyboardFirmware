#include <Keyboard.h>
////Config variables
//Matrix Setup
const int LAYERS = 3;
const int ROWS = 4;
const int COLUMNS = 12;

//Loop Delay
int delayLoopPin = 21;

//Input pins
int ColPins[COLUMNS] = {9,8,7,6,5,4,3,2,10,16,14,15};
int RowPins[ROWS] = {21,20,19,18};

////System Variables

//Default Buttons
const int NO_ACTION = 0;
const int LAYER_RAISE = 1;
const int LAYER_LOWER = 2;

//Keymap
bool switchStates[ROWS][COLUMNS];
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
