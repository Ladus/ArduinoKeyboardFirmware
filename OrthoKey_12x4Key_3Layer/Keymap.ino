//For ascii & arduino keyboard specific keycodes see:
//http://www.asciitable.com/
//https://www.arduino.cc/en/Reference/KeyboardModifiers

#ifdef M
#undef M
#endif
#define M(n) ((n) & KEYCODE_MASK)

const byte Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {//Layer Default
    {
      M(KEY_TAB),
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
      '['
    },
    {
      M(KEY_CAPS_LOCK),
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
    {
      M(KEY_LEFT_SHIFT),
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
      M(KEY_UP)
    },
    {
      M(KEY_LEFT_CTRL),
      LAYER_RAISE,
      M(KEY_LEFT_ALT),
      M(KEY_BACKSPACE),
      M(KEY_LEFT_SHIFT),
      ' ',
      ' ',
      M(KEY_RETURN),
      M(KEY_DELETE), 
      M(KEY_RIGHT_CTRL),
      M(KEY_LEFT),
      M(KEY_DOWN)
    }
  }
};
