#ifndef SCREEN_H
#define SCREEN_H

#include <TVout.h>
#include <fontALL.h>
#include "Graphics.h"
#include "defines.h"

class Screen{
  TVout tv;
  char barMargin = 8;
    
  public:
  void startUp();
};
#endif
