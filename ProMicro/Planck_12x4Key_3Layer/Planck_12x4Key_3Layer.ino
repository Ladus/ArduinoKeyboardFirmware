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
  // Setup serial for sending debug info if debugging is enabled
  if(EnableDebug)
  {
    Serial.begin(9600);   
  }
  
  //Setup col pins
  for(int i=0; i<COLUMNS; i++){
    pinMode(ColPins[i], INPUT_PULLUP);
  }

  //Setup row pins
  for(int i=0; i<ROWS; i++){
    pinMode(RowPins[i], OUTPUT);
  }
}

void loop()
{
  matrixLoop();
}
