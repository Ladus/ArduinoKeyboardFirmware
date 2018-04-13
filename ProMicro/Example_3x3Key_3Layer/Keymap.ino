const int Keymap[LAYERS][ROWS][COLUMNS] = 
{
  {//Layer Raise
    {//Row 0
      'r',
      'o',
      'y'
    },
    {//Row 1
      'k',
      'e',
      'y'
    },
    {//Row 2
      LAYER_LOWER,
      'b',
      LAYER_RAISE
    }
  },
  {//Layer Default
    {//Row 0
      '1',
      '2',
      '3'
    },
    {//Row 1
      '4',
      '5',
      '6'
    },
    {//Row 2
      LAYER_LOWER,
      '1',
      LAYER_RAISE
    }
  },
  {//Layer Lower
    {//Row 0
      '(',
      ')',
      '{'
    },
    {//Row 1
      '}',
      '<',
      '>'
    },
    {//Row 2
      LAYER_LOWER,
      '^',
      LAYER_RAISE
    }
  }
};
