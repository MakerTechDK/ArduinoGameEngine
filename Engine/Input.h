#ifndef INPUT_H
#define INPUT_H

#include <Arduino.h>
#include "defines.h"

class Input{
  char buttons[NR_BUTTONS];
  int timeBetweenUpdate = 10;
  signed long lastUpdate = millis();
  
  public:
    char controls;
    
    Input();
    void read();
};

#endif;
