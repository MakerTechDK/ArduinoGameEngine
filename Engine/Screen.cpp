#include "Screen.h"

void Screen::startUp(){
  tv.begin(PAL,WIDTH,HEIGHT+barMargin);
  //intro();
  tv.clear_screen();
  
  for(int i = 0; i < WIDTH/8; i++){
    display.screen[7*WIDTH/8+i] = 255;  
  }

  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 6; j++){
      display.screen[WIDTH/8*(i+1)+j] = name[i][j];
    }
  }
}

