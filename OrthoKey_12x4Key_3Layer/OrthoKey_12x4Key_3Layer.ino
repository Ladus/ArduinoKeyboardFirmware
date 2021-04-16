#include <Keyboard.h>

////Config variables
//Matrix Setup
const int LAYERS = 3;
const int ROWS = 4;
const int COLUMNS = 12;

//Loop Delay
int delayLoopPin = 21;

//Input pins
int ColPins[COLUMNS] = {21,20,19,18,17,22,5,4,3,2,1,0};
int RowPins[ROWS] = {12,13,9,10};

//Output debug info to serial monitor
const bool EnableDebug = true;

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
  pinMode(11, OUTPUT);
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

void loop()
{
  delayByPin();
  switchMatrixLoop();
  delay(10);
}
