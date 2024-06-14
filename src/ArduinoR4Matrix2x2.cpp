#include "Arduino.h"
#include "ArduinoR4Matrix2x2.h"

#define ROW1 6
#define ROW2 0
#define COL1 0
#define COL2 4

void mZero(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 1;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 0;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mOne(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 0;
    frame[1+c][2+r] = 0;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 0;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 1;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 1;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 0;
    frame[3+c][2+r] = 0;
    frame[3+c][3+r] = 0;
    frame[3+c][4+r] = 0;
    frame[3+c][5+r] = 0;
}

void mTwo(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 1;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 0;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 0;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mThree(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 0;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 0;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mFour(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 0;
    frame[1+c][1+r] = 0;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 0;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 0;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mFive(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 0;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 0;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mSix(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 1;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 0;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mSeven(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 1;
    frame[1+c][2+r] = 0;
    frame[1+c][3+r] = 0;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 0;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 0;
    frame[3+c][1+r] = 0;
    frame[3+c][2+r] = 0;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mEight(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 1;
    frame[1+c][1+r] = 1;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 1;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void mNine(int r, int c, uint8_t frame[8][12]){
    frame[0+c][0+r] = 0;
    frame[0+c][1+r] = 0;
    frame[0+c][2+r] = 0;
    frame[0+c][3+r] = 0;
    frame[0+c][4+r] = 0;
    frame[0+c][5+r] = 0;
    frame[1+c][0+r] = 0;
    frame[1+c][1+r] = 0;
    frame[1+c][2+r] = 1;
    frame[1+c][3+r] = 1;
    frame[1+c][4+r] = 1;
    frame[1+c][5+r] = 0;
    frame[2+c][0+r] = 0;
    frame[2+c][1+r] = 0;
    frame[2+c][2+r] = 1;
    frame[2+c][3+r] = 0;
    frame[2+c][4+r] = 1;
    frame[2+c][5+r] = 0;
    frame[3+c][0+r] = 1;
    frame[3+c][1+r] = 1;
    frame[3+c][2+r] = 1;
    frame[3+c][3+r] = 1;
    frame[3+c][4+r] = 1;
    frame[3+c][5+r] = 0;
}

void drawNumberFloat(float num, uint8_t frame[8][12]){
  
  if (num > 99.99){
    num = 99.99;
  } else if (num < 0.0){
    num = 0.0;
  }
  
  int tens, ones, tenth, hundreth;

  tens = num/10;
  ones = num-(tens*10);
  tenth = ((num)-(tens*10)-(ones))*10;
  hundreth = ((num*10)-(tens*100)-(ones*10)-(tenth))*10;

  if (tens == 0){
    mZero(ROW1, COL1, frame);
  } else if (tens == 1){
    mOne(ROW1, COL1, frame);
  } else if (tens == 2){
    mTwo(ROW1, COL1, frame);
  } else if (tens == 3){
    mThree(ROW1, COL1, frame);
  } else if (tens == 4){
    mFour(ROW1, COL1, frame);
  } else if (tens == 5){
    mFive(ROW1, COL1, frame);
  } else if (tens == 6){
    mSix(ROW1, COL1, frame);
  } else if (tens == 7){
    mSeven(ROW1, COL1, frame);
  } else if (tens == 8){
    mEight(ROW1, COL1, frame);
  } else if (tens == 9){
    mNine(ROW1, COL1, frame);
  }

  if (ones == 0){
    mZero(ROW1, COL2, frame);
  } else if (ones == 1){
    mOne(ROW1, COL2, frame);
  } else if (ones == 2){
    mTwo(ROW1, COL2, frame);
  } else if (ones == 3){
    mThree(ROW1, COL2, frame);
  } else if (ones == 4){
    mFour(ROW1, COL2, frame);
  } else if (ones == 5){
    mFive(ROW1, COL2, frame);
  } else if (ones == 6){
    mSix(ROW1, COL2, frame);
  } else if (ones == 7){
    mSeven(ROW1, COL2, frame);
  } else if (ones == 8){
    mEight(ROW1, COL2, frame);
  } else if (ones == 9){
    mNine(ROW1, COL2, frame);
  }

  if (tenth == 0){
    mZero(ROW2, COL1, frame);
  } else if (tenth == 1){
    mOne(ROW2, COL1, frame);
  } else if (tenth == 2){
    mTwo(ROW2, COL1, frame);
  } else if (tenth == 3){
    mThree(ROW2, COL1, frame);
  } else if (tenth == 4){
    mFour(ROW2, COL1, frame);
  } else if (tenth == 5){
    mFive(ROW2, COL1, frame);
  } else if (tenth == 6){
    mSix(ROW2, COL1, frame);
  } else if (tenth == 7){
    mSeven(ROW2, COL1, frame);
  } else if (tenth == 8){
    mEight(ROW2, COL1, frame);
  } else if (tenth == 9){
    mNine(ROW2, COL1, frame);
  }

  if (hundreth == 0){
    mZero(ROW2, COL2, frame);
  } else if (hundreth == 1){
    mOne(ROW2, COL2, frame);
  } else if (hundreth == 2){
    mTwo(ROW2, COL2, frame);
  } else if (hundreth == 3){
    mThree(ROW2, COL2, frame);
  } else if (hundreth == 4){
    mFour(ROW2, COL2, frame);
  } else if (hundreth == 5){
    mFive(ROW2, COL2, frame);
  } else if (hundreth == 6){
    mSix(ROW2, COL2, frame);
  } else if (hundreth == 7){
    mSeven(ROW2, COL2, frame);
  } else if (hundreth == 8){
    mEight(ROW2, COL2, frame);
  } else if (hundreth == 9){
    mNine(ROW2, COL2, frame);
  }
}