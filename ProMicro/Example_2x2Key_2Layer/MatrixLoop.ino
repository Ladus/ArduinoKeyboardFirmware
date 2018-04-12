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
