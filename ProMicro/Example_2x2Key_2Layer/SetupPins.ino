void setupPins() {
  pinMode(delayLoopPin, INPUT_PULLUP);

  //Cols
  for(int i=0; i<COLUMNS; i++){
    pinMode(ColPins[i], OUTPUT);
    digitalWrite(ColPins[i], LOW); 
  }

  //Rows
  for(int i=0; i<ROWS; i++){
    pinMode(RowPins[i], INPUT_PULLUP);
  }
}
