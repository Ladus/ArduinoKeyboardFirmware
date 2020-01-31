void keyPressHandler(int key) //Key Press
{
  DebugPrintKeyState(); //Prints debug info if debug is enabled
  
  if(key == LAYER_RAISE){
    layerChange(0);
  }
  else if(key == LAYER_LOWER){
    layerChange(2);
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
  DebugPrintKeyState(); //Prints debug info if debug is enabled
  
  if(key == LAYER_RAISE){
    layerChange(1);
  }
  else if(key == LAYER_LOWER){
    layerChange(1);
  }
  else if(key == NO_ACTION){
    // Do nothing
  }
  else {
    Keyboard.release(key);
  }
}

void layerChange(int layer) // Change layer and release keys that are not the same on the other layer
{
  int previousLayer = currentLayer;
  currentLayer = layer;

  for(int y = 0; y < ROWS; y++) // For each row
  {
    for(int z = 0; z < COLUMNS; z++) // For each column
    {
      if(switchStates[y][z]) // If switch is enabled 
      {
        // If key is not the same key on the new layer, release it
        if(Keymap[previousLayer][y][z] != Keymap[currentLayer][y][z])
        {
          Keyboard.release(Keymap[previousLayer][y][z]);
        }
      }
    }
  }
}
