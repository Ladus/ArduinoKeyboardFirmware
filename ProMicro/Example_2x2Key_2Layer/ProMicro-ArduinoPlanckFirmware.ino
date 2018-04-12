#include <Keyboard.h>
//Matrix Setup
const int LAYERS = 2;
const int ROWS = 2;
const int COLUMNS = 2;

//Default Buttons
const int NO_ACTION = 0;
const int LAYER_RAISE = 1;

//Keymap
extern int Keymap[LAYERS][ROWS][COLUMNS];
int PressedButtons[LAYERS][ROWS][COLUMNS];

//Loop Delay
int delayLoopPin = 21;

//Input pins
int Col0Pin = 2;
int Col1Pin = 3;
int Row0Pin = 4;
int Row1Pin = 5;

void setup()
{
  pinMode(delayLoopPin, INPUT_PULLUP);
}

void loop()
{
  //Delay loop
  while (digitalRead(delayLoopPin) == HIGH) 
  {
    delay(8000);
  }

  //loop through columns, loop through rows and read outputs
  
  //per key check if previously pressed, and not anymore (release key[layer,row,col])
  //else now pressed
  //  check if no action then do nothing
  //  check if layer button then check if changed, if changed release all
  //    create release all/clear pressedButtons array function
  //  get button from keymap according to layer,row,column number and press
  
  delay(1000); 
}
