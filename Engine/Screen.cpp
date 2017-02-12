#include "Screen.h"

void Screen::startUp(){
  tv.begin(PAL,WIDTH,HEIGHT+topMargin+bottomMargin);
  tv.clear_screen();
  
  for(int i = 0; i < WIDTH/8; i++){
    display.screen[(topMargin - 1)*WIDTH/8+i] = 255;
    display.screen[(topMargin - 1-2)*WIDTH/8+i] = 255;
    display.screen[(HEIGHT+topMargin+bottomMargin-1)*WIDTH/8+i] = 255;
  }
}

void Screen::printTile(unsigned char sprite, Point position){
  for(int i = 0; i < 8; i++){
    display.screen[(WIDTH/8)*(topMargin+position.y*8+i)+position.x] = sprites[sprite][i];  
  }
}

void Screen::printSprite(unsigned char sprite[], int height, Point position){
  int xDiff = position.x % 8;
  for(int i = 0; i < height; i++){
    display.screen[(WIDTH/8)*(topMargin+position.y+i)+position.x/8] = display.screen[(WIDTH/8)*(topMargin+position.y+i)+position.x/8] | (sprite[i] >> xDiff);
    display.screen[(WIDTH/8)*(topMargin+position.y+i)+position.x/8+1] = display.screen[(WIDTH/8)*(topMargin+position.y+i)+position.x/8+1] | (sprite[i] << (8-xDiff)); 
  }  
}

void Screen::printText(unsigned char text[], unsigned char size, Point position){
  for(int i = 0; i < size; i++){
    printSprite(letters[text[i]], 8, position);
    position.x += 8;   
  }  
}

void Screen::clearText(unsigned int size, Point position){
  for(int i = 0; i < size; i++){
    for(int j = 0; j < 8; j++){
      for(int k = 0; k < 8; k++){
        tv.set_pixel(position.x+k+8*i, topMargin+position.y+j, 0);
      }
    }  
  }
}

void Screen::setTopText(unsigned char text[], unsigned char size, unsigned int x){
  printText(text, size, Point(x, topMargin/2-4-topMargin));  
}

void Screen::clearScreen(){
  tv.fill(0);
  
  for(int i = 0; i < WIDTH/8; i++){
    display.screen[(topMargin - 1)*WIDTH/8+i] = 255;
    display.screen[(topMargin - 1-2)*WIDTH/8+i] = 255;
    display.screen[(HEIGHT+topMargin+bottomMargin-1)*WIDTH/8+i] = 255;
  }
}
