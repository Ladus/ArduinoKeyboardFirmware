//For ascii & arduino keyboard specific keycodes see:
//http://www.asciitable.com/
//https://www.arduino.cc/en/Reference/KeyboardModifiers

const unsigned int Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {//0 Raised layer
    {
      '`',
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
      KEY_DELETE
    },
    {
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      KEY_PAGE_UP,
      KEY_HOME,
      KEY_UP,
      KEY_END,
      NO_ACTION    
    },
    {
      M(KEY_LEFT_SHIFT),
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      KEY_PAGE_DOWN,
      KEY_LEFT,
      KEY_DOWN,
      KEY_RIGHT, 
      NO_ACTION
    },
    {
      KEY_LEFT_CTRL,
      NO_ACTION,
      KEY_LEFT_GUI,
      KEY_LEFT_ALT,
      NO_ACTION,
      ' ',
      ' ',
      LAYER_RAISE,
      NO_ACTION, 
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  },
  {//1 Default layer
    {
      KEY_ESC,
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
      KEY_BACKSPACE
    },
    {
      KEY_TAB,
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
      KEY_ENTER    
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
      '\''
    },
    {
      KEY_LEFT_CTRL,
      NO_ACTION,
      KEY_LEFT_GUI,
      KEY_LEFT_ALT,
      LAYER_LOWER,
      ' ',
      ' ',
      LAYER_RAISE,
      NO_ACTION, 
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  },
  {//2 Lowered layer
    {
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
      KEY_F12
    },
    {
      KEY_CAPS_LOCK,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      '[',
      ']',
      NO_ACTION 
    },
    {
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      '-',
      '=',
      NO_ACTION, 
      NO_ACTION
    },
    {
      KEY_LEFT_CTRL,
      NO_ACTION,
      KEY_LEFT_GUI,
      KEY_LEFT_ALT,
      LAYER_LOWER,
      ' ',
      ' ',
      NO_ACTION,
      NO_ACTION, 
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  }
};