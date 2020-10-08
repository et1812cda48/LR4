#include "graphics.h"
#include "picture.hpp"
#define HIGH 600
#define WIDTH 800

void Sun()
{
   Ground();
   Sky();
   setcolor(YELLOW);
   setfillstyle(1, YELLOW);
   circle(3*WIDTH/4, HIGH/6, WIDTH/10);
   floodfill(3*WIDTH/4, HIGH/4, YELLOW);
}

void Sky()
{
   setfillstyle(1, LIGHTBLUE);
   floodfill(1, 1, GREEN);
}

void Ground()
{
   setcolor(GREEN);
   setfillstyle(1, GREEN);
   line(0, 2*HIGH/3, WIDTH, 2*HIGH/3);
   floodfill(1, 2*HIGH/3+1, GREEN);
}