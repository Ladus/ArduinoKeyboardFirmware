# ArduinoKeyboardFirmware
Arduino keyboard firmware to convert a key matrix into keyboard input with multiple switchable key layers. Initially made only for the Pro Micro, but may be extended towards other boards later on.

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

## Supported Boards:
* Pro Micro (Tested on 5V 16MHz, but it should work on 3.3V 8MHz as well)

## Example 2x2Key 2Layer
An example project to get the basics to work with just 4 buttons. 
It requires 4 pins, 2 output(Columns) and 2 inputs (Rows).
It uses INPUT_PULLUP pins as inputs, which will be pulled down from the rows when a switch is pressed.
This allows for the more common diode direction from column to row.

The pin variables in "Example_2x2Key_2Layer.ino" should be adjusted to correspond to the pins you used on your board.

![2x2 keymap layout](https://raw.githubusercontent.com/Ladus/ArduinoKeyboardFirmware/development/ProMicro/Example_2x2Key_2Layer/keyboard-layout.png)

### Rows and Columns

|       | Col0  | Col1  |     |        | Col0  | Col1  |
| ---   | ---   | ---   | --- | ---    | ---   | ---   |
|Row 0  | 1     | 2     |     | Row 0  | R     | O     |
|Row 1  | 3     | Raise |     | Row 1  | Y     | Raise |

## Example 3x3Key 2Layer
An example project to get the basics to work with just 9 buttons. 
It requires 6 pins, 3 output(Columns) and 3 inputs (Rows).
It uses INPUT_PULLUP pins as inputs, which will be pulled down from the rows when a switch is pressed.
This allows for the more common diode direction from column to row.

The pin variables in "Example_2x2Key_2Layer.ino" should be adjusted to correspond to the pins you used on your board.

![3x3 keymap layout](https://raw.githubusercontent.com/Ladus/ArduinoKeyboardFirmware/development/ProMicro/Example_3x3Key_3Layer/keyboard-layout.png)


## Planck 12x4Key 3Layer
**Not Implemented Yet**
The project for which I started this endeavour. Wanting to create my own Planck-like Grid Keyboard, with 48 keys (12x4)
