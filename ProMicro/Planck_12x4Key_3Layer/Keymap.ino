//For ascii & arduino keyboard specific keycodes see:
//http://www.asciitable.com/
//https://www.arduino.cc/en/Reference/KeyboardModifiers

const int Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {//Layer Raise
    {//Row 0
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      KEY_HOME,/*Homr*/
      KEY_PAGE_DOWN,/*pgdwn*/
      '(',
      ')',
      KEY_PAGE_UP,/*pgup*/
      KEY_END,/*end*/
      NO_ACTION,
      NO_ACTION,
      '='
    },
    {//Row 1
      NO_ACTION,
      '_',
      '|',
      KEY_LEFT_ARROW,
      KEY_DOWN_ARROW,
      '{',
      '}',
      KEY_UP_ARROW,
      KEY_RIGHT_ARROW,
      '&',
      ':',
      '"'
    },
    {//Row 2
      NO_ACTION,
      '!',
      '@',
      '#',
      '<',
      '[',
      ']',
      '>',
      '$',
      '%',
      '?',
      NO_ACTION
    },
    {//Row 3
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      LAYER_LOWER,
      NO_ACTION,
      NO_ACTION,
      LAYER_RAISE,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  },
  {//Layer Default
    {//Row 0
      177, /*esc*/
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
      176 /*Return/Enter*/
    },
    {//Row 1
      179, /*tab*/
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
      NO_ACTION,
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
      NO_ACTION
    },
    {//Row 3
      128, /*L Ctrl*/
      131, /*L Gui/Windows/super*/
      130, /*L Alt*/
      178, /*backspace*/
      LAYER_LOWER, /*,*/ 
      129, /*L Shift*/
      ' ',
      LAYER_RAISE,
      212,/*Delete*/
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  },
  {//Layer Lower
    {//Row 0
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      '/',
      '-',
      '^',
      '~',
      '+',
      '*',
      NO_ACTION,
      NO_ACTION,
      '='
    },
    {//Row 1
      NO_ACTION,
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
      '`'
    },
    {//Row 2
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      '\\',
      NO_ACTION
    },
    {//Row 3
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      LAYER_LOWER,
      NO_ACTION,
      NO_ACTION,
      LAYER_RAISE,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION,
      NO_ACTION
    }
  }
};
