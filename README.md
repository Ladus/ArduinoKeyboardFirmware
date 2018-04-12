# ArduinoKeyboardFirmware
Arduino keyboard firmware to convert a key matrix into keyboard input with multiple switchable key layers. Initially made only for the Pro Micro, but may be extended towards other boards later on.

## Supported Boards:
* Pro Micro (Tested on 5V 16MHz, but it should work on 3.3V 8MHz as well)

## Versions:
### Example 2x2Key 2Layer
An example project to get the basics to work with just 4 buttons. It requires 4 pins, 2 output(Columns) and 2 input(Rows).


#### Default Layer
|       | Col0  | Col1  |
| ---   | ---   | ---   |
|Row 0  | 1     | 2     |
|Row 1  | 3     | Raise |
#### Raised Layer
|       | Col0  | Col1  |
| ---   | ---   | ---   |
|Row 0  | !     | @     |
|Row 1  | #     | Raise |
