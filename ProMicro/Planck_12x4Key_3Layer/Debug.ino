void Debug()//Debugging
{
  if(EnableDebug)
  {
   debugPrintKeyState();
  }
}

void debugPrintKeyState()//Debugging
{
  for(int y = 0; y < ROWS; y++){
    for(int z = 0; z < COLUMNS; z++){
      Serial.print(switchStates[y][z]);  
    }
    Serial.println(";");
   }
   Serial.println("");
}
