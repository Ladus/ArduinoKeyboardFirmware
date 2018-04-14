//For ascii & arduino keyboard specific keycodes see:
//http://www.asciitable.com/
//https://www.arduino.cc/en/Reference/KeyboardModifiers

const int Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {//Layer Raise
    {//Row 0
      'r',
      'o'
    },
    {//Row 1
      'y',
      LAYER_RAISE
    }
  },
  {//Layer Lower
    {//Row 0
      '1',
      '2'
    },
    {//Row 1
      '3',
      LAYER_RAISE
    }
  }
};
