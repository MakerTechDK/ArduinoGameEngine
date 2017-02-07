#include "Input.h"

Input::Input(){
  buttons[0] = L_PIN;
  buttons[1] = R_PIN;
  buttons[2] = U_PIN;
  buttons[3] = D_PIN;
  buttons[4] = ACTION1_PIN;
  buttons[5] = ACTION2_PIN;

  controls = 0;
}

void Input::read(){
  signed long timeSinceUpdate = millis() - lastUpdate;
  if(timeSinceUpdate){
    lastUpdate = millis();
    controls = 0;
    for(int i = 0; i < NR_BUTTONS; i++){
      controls = controls | (digitalRead(buttons[i]) << i);
    }
  }
}

