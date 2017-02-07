#include "Console.h"

void Console::start(){
  setup();
  while(1){
    loop();  
  }  
}

void Console::loop(){
    checkControls();
    state->update();
}

void Console::setup(){
  screen.startUp();
  state->setup(&screen);
}

void Console::checkControls(){
  input.read();
  if(input.controls == 0b1){
    state->buttonInput(L);
  }
  if(input.controls == 0b10){
    state->buttonInput(R);
  }
  if(input.controls == 0b100){
    state->buttonInput(U);
  }
  if(input.controls == 0b1000){
    state->buttonInput(D);
  }
  if(input.controls == 0b10000){
    state->buttonInput(A);
  }
  if(input.controls == 0b100000){
    state->buttonInput(B);
  }
}
