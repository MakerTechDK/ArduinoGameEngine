#ifndef SCREEN_H
#define SCREEN_H

#include <TVout.h>
#include <fontALL.h>
#include "Graphics.h"
#include "defines.h"

class Screen{
  TVout tv;
  char topMargin = 15;
  char bottomMargin = 1;
    
  public:
  void startUp();
  void printTile(unsigned char sprite, Point position);
  void printSprite(unsigned char sprite[], int height, Point position);
  void printText(unsigned char text[], unsigned char letters, Point position);
  void clearText(unsigned int size, Point position);
  void setTopText(unsigned char text[], unsigned char letters, unsigned int x);
  void clearScreen();
};
#endif
