//For ascii & arduino keyboard specific keycodes see:
//http://www.asciitable.com/
//https://www.arduino.cc/en/Reference/KeyboardModifiers

const int Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {//Layer Default
    {
      KEY_ESC, /*esc*/
      KEY_F1,
      KEY_F2,
      KEY_F3,
      KEY_F4,
      KEY_F5,
      KEY_F6,
      KEY_F7,
      KEY_F8,
      KEY_F9,
      KEY_F10,
      KEY_F11,
      KEY_F12,
      KEY_DELETE
    },
    {
      '`', /*tab*/
      '1',
      '2',
      '3',
      '4',
      '5',
      '6',
      '7',
      '8',
      '9',
      '0',
      '-',
      '=',
      KEY_BACKSPACE
    },
    {
      KEY_TAB,
      'q',
      'w',
      'e',
      'r',
      't',
      'y',
      'u',
      'i',
      'o',
      'p',
      '[',
      ']',
      KEY_RETURN
    },
    {
      KEY_CAPS_LOCK,
      'a',
      's',
      'd',
      'f',
      'g',
      'h',
      'j',
      'k',
      'l',
      ';',
      '\'',
      '\\',
      KEY_RIGHT_SHIFT
    },
    {
      KEY_LEFT_SHIFT,
      'z',
      'x',
      'c',
      'v',
      'b',
      'n',
      'm',
      ',',
      '.',
      '/',
      KEY_HOME,
      KEY_UP,
      KEY_END
    },
    {
      KEY_LEFT_CTRL,
      KEY_LEFT_GUI,
      KEY_LEFT_ALT,
      KEY_BACKSPACE,
      ' ',
      ' ',
      ' ',
      ' ',
      KEY_DELETE,
      KEY_RIGHT_ALT,
      KEY_RIGHT_CTRL,
      KEY_LEFT,
      KEY_DOWN,
      KEY_RIGHT
    }
  }
};
