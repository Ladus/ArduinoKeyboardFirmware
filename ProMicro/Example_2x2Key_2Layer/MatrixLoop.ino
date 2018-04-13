void switchMatrixLoop() {
  //loop through columns, loop through rows and read outputs
  for(int column = 0; column < COLUMNS; column++) 
  {
    digitalWrite(ColPins[column], LOW); //Power On Column
    for(int row = 0; row < ROWS; row++)
    {
      keyChangeCheck(!digitalRead(RowPins[row]), row, column);       
    }
    digitalWrite(ColPins[column], HIGH); //Power Off Column
  }
}

int keyChangeCheck(bool currentState, int row, int column) 
{
  //DEBUG: Serial.println( String("Col: ") + column + String(" Row: ") + row + String(" Current State: ") + currentState);
  bool previousState = switchStates[currentLayer][row][column];
  if(currentState == previousState)   //Key is the same
  {
    //No change
  }
  else if (currentState == HIGH)      //Key is pressed
  {
    //DEBUG: Serial.println(String(Keymap[currentLayer][row][column]) + String(" Key pressed, Layer: ") + currentLayer + String(" Row: ") + row + String(" Column: ") + column);
    switchStates[currentLayer][row][column] = true;
    keyPressHandler(Keymap[currentLayer][row][column]);
  }
  else                                //Key is released
  {
    //DEBUG: Serial.println(String(Keymap[currentLayer][row][column]) + String(" Key released, Layer: ") + currentLayer + String(" Row: ") + row + String(" Column: ") + column);
    switchStates[currentLayer][row][column] = false;
    keyReleaseHandler(Keymap[currentLayer][row][column]);
  }
}


void keyPressHandler(int key) 
{
  if(key == LAYER_RAISE){
    Keyboard.releaseAll();
    releaseAllSwitchStates();
    currentLayer = 0;
  }
  else if(key == NO_ACTION){
    // Do nothing
  }
  else {
    Keyboard.press(key);
  }
}

void keyReleaseHandler(int key) {
  if(key == LAYER_RAISE){
    Keyboard.releaseAll();
    releaseAllSwitchStates();
    currentLayer = 1;
  }
  else if(key == NO_ACTION){
    // Do nothing
  }
  else {
    Keyboard.release(key);
  }
}

