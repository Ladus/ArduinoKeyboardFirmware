void switchMatrixLoop() {
  //loop through columns, loop through rows and read outputs
  for(int column = 0; column < COLUMNS; column++) 
  {
    digitalWrite(ColPins[column], HIGH); //Power On Column
    for(int row = 0; row < ROWS; row++){
      keyChangeCheck(digitalRead(RowPins[row]), row, column);       
    }
    digitalWrite(ColPins[column], LOW); //Power Off Column
  }
}

int keyChangeCheck(bool currentState, int row, int column) 
{
  bool previousState = switchStates[currentLayer][row][column];
  if(currentState == previousState)   //Key is the same
  {
    //No change
  }
  else if (currentState == HIGH)      //Key is pressed
  {
    keyPressHandler(row, column);
  }
  else                                //Key is released
  {
    keyReleaseHandler(row, column);
  }
}


void keyPressHandler(int row, int column) 
{
  //Get Key Status
  
  //else now pressed
  //  check if no action then do nothing
  //  check if layer button then check if changed, if changed release all before changing layer
  //    create release all/clear pressedButtons array function
  //  get button from keymap according to layer,row,column number and press
}

void keyReleaseHandler(int row, int column) {
  //per key check if previously pressed, and not anymore (release key[layer,row,col])
  //if releasekey = layer key then releaseAll
}

