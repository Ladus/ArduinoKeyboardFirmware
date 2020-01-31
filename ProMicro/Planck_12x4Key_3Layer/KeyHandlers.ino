void keyPressHandler(int key) //Key Press
{
  if(key == LAYER_RAISE){
    releaseAllSwitchStates();
    currentLayer = 0;
  }
  else if(key == LAYER_LOWER){
    releaseAllSwitchStates();
    currentLayer = 2;
  }
  else if(key == NO_ACTION){
    // Do nothing
  }
  else {
    Keyboard.press(key);
  }
}

void keyReleaseHandler(int key) //Key Release
{
  if(key == LAYER_RAISE){
    releaseAllSwitchStates();
    currentLayer = 1;
  }
  else if(key == LAYER_LOWER){
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

void releaseAllSwitchStates() //Clear switchStates array
{  
  for(int y = 0; y < ROWS; y++){
    for(int z = 0; z < COLUMNS; z++){
      
      if(
       switchStates[ROWS][COLUMNS] == false
      )
      {
        Serial.println( String(Keymap[currentLayer][y][z]) + String(" Key pressed") );
      }

      //Dont release modifiers
      int key = Keymap[currentLayer][y][z];
      if(
       key != KEY_LEFT_CTRL && 
       key != KEY_LEFT_ALT &&
       key != KEY_LEFT_SHIFT &&
       key != KEY_LEFT_GUI &&
       switchStates[ROWS][COLUMNS] == true
      )
      {
        Serial.println( String(Keymap[currentLayer][y][z]) + String(" Key released") );
        Keyboard.release(key);
        switchStates[ROWS][COLUMNS] = false;
      }
    }
  }
}
