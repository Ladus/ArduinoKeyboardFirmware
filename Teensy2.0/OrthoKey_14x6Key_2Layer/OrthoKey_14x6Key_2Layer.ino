#include <Keyboard.h>
////Config variables
//Matrix Setup
const int LAYERS = 1;
const int ROWS = 6;
const int COLUMNS = 14;

//Loop Delay
int delayLoopPin = 21;

//Input pins
int ColPins[COLUMNS] = {0,1,2,3,4,5,6,7,8,9,10,12,13,14};
int RowPins[ROWS] = {20,19,22,17,16,15};

////System Variables

//Default Buttons
const int NO_ACTION = 0;
const int LAYER_RAISE = 1;
const int LAYER_LOWER = 2;

//Keymap
bool switchStates[ROWS][COLUMNS];
int currentLayer = 0; //0 raised; 1 default; 


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
