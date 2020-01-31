//For ascii & arduino keyboard specific keycodes see:
//http://www.asciitable.com/
//https://www.arduino.cc/en/Reference/KeyboardModifiers

const int Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {////////////////////////////////////////////Layer Raise
    {//Row 0
      '`',
      '1',
      '2',
      '3',/*Homr*/
      '4',/*pgdwn*/
      '5',
      '6',
      '7',/*pgup*/
      '8',/*end*/
      '9',
      '0',
      KEY_DELETE
    },
    {//Row 1
      NO_ACTION,
      NO_ACTION,
      KEY_HOME,
      KEY_PAGE_UP,
      KEY_PAGE_DOWN,
      KEY_END,
      KEY_LEFT_ARROW,
      KEY_DOWN_ARROW,
      KEY_UP_ARROW,
      KEY_RIGHT_ARROW,
      '-',
      '='
    },
    {//Row 2
      KEY_LEFT_SHIFT,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      '[',
      ']',
      '\\',
      NO_ACTION
    },
    {//Row 3
      KEY_LEFT_CTRL,
      KEY_LEFT_GUI, 
      KEY_LEFT_ALT,
      NO_ACTION,
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
  {////////////////////////////////////////////Layer Default
    {//Row 0
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
      KEY_BACKSPACE /*Return/Enter*/
    },
    {//Row 1
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
      '\''
    },
    {//Row 2
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
      KEY_RETURN
    },
    {//Row 3
      KEY_LEFT_CTRL,
      KEY_LEFT_GUI, 
      KEY_LEFT_ALT,
      NO_ACTION,
      LAYER_LOWER,
      ' ',
      ' ',
      LAYER_RAISE,
      '1',
      '2',
      '3',
      '4'
    }
  },
  {////////////////////////////////////////////Layer Lower
    {//Row 0
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
    {//Row 1
      KEY_CAPS_LOCK,
      206, /* Print screen */
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    },
    {//Row 2
      KEY_LEFT_SHIFT,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      212,/* Break - 76+136 */
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    },
    {//Row 3
      KEY_LEFT_CTRL, /*L Ctrl*/
      KEY_LEFT_GUI, /*L Gui/Windows/super*/
      KEY_LEFT_ALT, /*L Alt*/
      NO_ACTION, /*backspace*/
      LAYER_LOWER, /*,*/ 
      ' ', /*L Shift*/
      ' ',
      LAYER_RAISE,
      NO_ACTION,/*Delete*/
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  }
};
