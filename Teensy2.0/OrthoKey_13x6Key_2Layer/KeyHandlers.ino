void releaseAllSwitchStates() //Clear switchStates array
{
  for(int y = 0; y < ROWS; y++){
    for(int z = 0; z < COLUMNS; z++){
      switchStates[ROWS][COLUMNS] = false;
    }
  }
}

void keyPressHandler(int key) //Key Press
{
  if(key == LAYER_RAISE){
    Keyboard.releaseAll();
    releaseAllSwitchStates();
    currentLayer = 0;
  }
  else if(key == LAYER_LOWER){
    Keyboard.releaseAll();
    releaseAllSwitchStates();
    currentLayer = 2;
  }
  else if(key == NO_ACTION){
    // Do nothing
  }
  else {
    digitalWrite(11, HIGH);
    Keyboard.press(key);
  }
}

void keyReleaseHandler(int key) //Key Release
{
  if(key == LAYER_RAISE){
    Keyboard.releaseAll();
    releaseAllSwitchStates();
    currentLayer = 1;
  }
  else if(key == LAYER_LOWER){
    Keyboard.releaseAll();
    releaseAllSwitchStates();
    currentLayer = 1;
  }
  else if(key == NO_ACTION){
    // Do nothing
  }
  else {
    Keyboard.release(key);
    digitalWrite(11, LOW);
  }
}
