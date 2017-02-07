#ifndef STATE_H
#define STATE_H

#include "defines.h"
#include "Screen.h"

class State{
 public:
  virtual void update() = 0;
  virtual void buttonInput(Button) = 0;
  virtual void setup(Screen*) = 0;
};
#endif
