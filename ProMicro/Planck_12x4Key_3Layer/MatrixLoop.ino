void switchMatrixLoop() {
  //loop through columns, loop through rows and read outputs
  for(int row = 0; row < ROWS; row++) 
  {
    digitalWrite(RowPins[row], LOW); //Power Low on column
    for(int column = 0; column < COLUMNS; column++)
    {
      //Pass inverted pin state of ColPin as row state because of INPUT_PULLUP
      //If the switch is pressed, this column should be pulled LOW by the column pin.
      //By inverting this a pressed key is 1 and a released key is 0.
      keyChangeCheck(!digitalRead(ColPins[column]), row, column);       
    }
    digitalWrite(RowPins[row], HIGH); //Power back to High on Column
  }
}

int keyChangeCheck(bool currentState, int row, int column) 
{
  //DEBUG: Serial.println( String("Col: ") + column + String(" Row: ") + row + String(" Current State: ") + currentState);
  bool previousState = switchStates[row][column];
  if(currentState == previousState)   //Key is the same
  {
    //No change
  }
  else if (currentState == HIGH)      //Key is pressed
  {
    //DEBUG: Serial.println(String(Keymap[currentLayer][row][column]) + String(" Key pressed, Layer: ") + currentLayer + String(" Row: ") + row + String(" Column: ") + column);
    keyPressHandler(Keymap[currentLayer][row][column]);
    switchStates[row][column] = true;
  }
  else                                //Key is released
  {
    //DEBUG: Serial.println(String(Keymap[currentLayer][row][column]) + String(" Key released, Layer: ") + currentLayer + String(" Row: ") + row + String(" Column: ") + column);
    keyReleaseHandler(Keymap[currentLayer][row][column]);
    switchStates[row][column] = false;
  }
}
