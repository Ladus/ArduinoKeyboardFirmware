# ArduinoKeyboardFirmware
Arduino keyboard firmware to convert a key matrix into keyboard input with multiple switchable key layers. Initially made for use with an Arduino Pro Micro or Teensy 2.0.

## Confirmed working arduino boards:
* Pro Micro (Tested on 5V 16MHz, but it should work on 3.3V 8MHz as well)
* Teensy 2.0

## Ortho 12x4Key 3Layer
The project for which I started this endeavour. Wanting to create my own Planck-like Grid Keyboard, with 48 keys (12x4). The amount of rows and columns can be easily adjusted at the top of the main .ino file, underneath `////Config variables` 

### Files
#### OrthoKey_12x4Key_2Layer.ino
This is the main file, here you can edit the amount of rows and columns that you want to use, and map the pins for those rows and columns.
It also hosts the main application loop.
#### Keymap.ino
This is where you configure your keymap.
#### SetupPins.ino
This sets the pinmode for the input and output pins according to the configured data.
#### MatrixLoop.ino
This script loops through the matrix to determine the state for each switch. Next it checks the new state to the previous state to check whether the switch has changed. If the state has changed it will result in a switch being pressed or released, which will trigger the KeyHandlers.ino's function.
#### KeyHandlers.ino
This script is called from the MatrixLoop. This is where the keypress or release will be converted into an character from the Keymap.ino.


## Usefull additional information:
* For how to setup a key matrix and how/why it works I highly recommend the guide over at PCBHeaven:  
http://pcbheaven.com/wikipages/How_Key_Matrices_Works/
* For creating visual keyboard layouts and saving them as json:  
http://www.keyboard-layout-editor.com/
* For using the above json data to generate a Plate and Case cutout file:  
http://builder.swillkb.com/
* For ascii & arduino keyboard specific keycodes see:  
http://www.asciitable.com/  
https://www.arduino.cc/en/Reference/KeyboardModifiers
