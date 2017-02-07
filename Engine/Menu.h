#ifndef MENU_H
#define MENU_H

#include "defines.h"
#include "Screen.h"
#include "State.h"

class Menu : public State{
  public:
  virtual void update();
  virtual void buttonInput(Button);
  virtual void setup(Screen*);  
};

#endif
