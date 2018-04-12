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
extern int Keymap[LAYERS][ROWS][COLUMNS];
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

void setupPins() {
  pinMode(delayLoopPin, INPUT_PULLUP);

  //Cols
  for(int i=0; i<COLUMNS; i++){
    pinMode(ColPins[i], OUTPUT);
  }

  //Rows
  for(int i=0; i<ROWS; i++){
    pinMode(RowPins[i], INPUT);
  }
}

void switchMatrixLoop() {
  //loop through columns, loop through rows and read outputs
  for(int row = 0; row < ROWS; row++) 
  {
    for(int column = 0; column < COLUMNS; column++){
      perSwitchHandler(row, column);
    }
  }
  
}

void perSwitchHandler(int row, int column) {
  //per key check if previously pressed, and not anymore (release key[layer,row,col])
  //else now pressed
  //  check if no action then do nothing
  //  check if layer button then check if changed, if changed release all
  //    create release all/clear pressedButtons array function
  //  get button from keymap according to layer,row,column number and press
}

void delayByPin() {
  //If delayPin becomes low (connected to ground) then delay loop
  //implemented to stop the chip from becoming stuck in a key spamming loop
  while (digitalRead(delayLoopPin) == LOW) 
  {
    delay(8000);
  }
}

