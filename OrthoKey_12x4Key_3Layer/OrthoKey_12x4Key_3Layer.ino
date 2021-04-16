#include <Keyboard.h>

////Config variables
//Matrix Setup
const int LAYERS = 1;
const int ROWS = 4;
const int COLUMNS = 12;

//Input pins
<<<<<<< HEAD:OrthoKey_12x4Key_3Layer/OrthoKey_12x4Key_2Layer.ino
int ColPins[COLUMNS] = {21,20,19,18,17,11,5,4,3,2,1,0};
int RowPins[ROWS] = {10,9,13,12};
=======
const int ColPins[COLUMNS] = {6,7,8,9,10,16,14,15,18,19,20,21};
const int RowPins[ROWS] = {2,3,4,5};
>>>>>>> master:ProMicro/Planck_12x4Key_3Layer/Planck_12x4Key_3Layer.ino

//Output debug info to serial monitor
const bool EnableDebug = true;

////System Variables
//Default Buttons
const byte NO_ACTION = 0;
const byte LAYER_RAISE = 1;
const byte LAYER_LOWER = 2;

//Keymap
bool switchStates[ROWS][COLUMNS];
int currentLayer = 1; //0 raised; 1 default; 2 lowered;

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
