void setupPins() {
  //Setup col pins
  for(int i=0; i<COLUMNS; i++){
    pinMode(ColPins[i], INPUT_PULLUP);
  }

  //Setup row pins
  for(int i=0; i<ROWS; i++){
    pinMode(RowPins[i], OUTPUT);
  }
}
