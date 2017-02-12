#ifndef DEFINES_H
#define DEFINES_H

#define NR_BUTTONS 6

#define U_PIN 10
#define R_PIN 11
#define L_PIN 12
#define D_PIN 13

#define ACTION1_PIN 3
#define ACTION2_PIN 4

#define WIDTH 120 // 15 tiles
#define HEIGHT 72 // 9 tiles

enum Direction{Left, Right, Up, Down};
enum Button{U,D,L,R,A,B};

struct Point{
  int x; 
  int y; 
  Point(){}
  Point(int _x, int _y){x = _x; y = _y;}
  
};

#endif
