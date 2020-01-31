#include <Keyboard.h>
////Config variables
//Matrix Setup
const int LAYERS = 3;
const int ROWS = 4;
const int COLUMNS = 12;

//Input pins
const int ColPins[COLUMNS] = {6,7,8,9,10,16,14,15,18,19,20,21};
const int RowPins[ROWS] = {2,3,4,5};

//Output debug info to serial monitor
const bool EnableDebug = true;

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
  if(EnableDebug)
  {
    Serial.begin(9600); //Used for outputting debug info   
  }
  
  setupPins();
}

void loop()
{
  matrixLoop();
  delay(10);
}
