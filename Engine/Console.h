#ifndef CONSOLE_H
#define CONSOLE_H

#include <util/delay.h>
#include "Screen.h"
#include "Input.h"
#include "State.h"
#include "Menu.h"

class Console{
  Screen screen;
  Input input;
  State *state = new Menu();
  
  void loop();
  void setup();
  void checkControls();
  
  public:
  void start(); 

};

#endif
