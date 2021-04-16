void DebugPrintKeyState()//Debugging
{
  if(EnableDebug)
  {
  Serial.println("Matrix State:");
  for(int y = 0; y < ROWS; y++){
    for(int z = 0; z < COLUMNS; z++){
      Serial.print(switchStates[y][z]);  
    }
    Serial.println("");
   }   
   Serial.println("");
  }
}
