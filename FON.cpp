void background()
{
   setcolor(GREEN);
   setfillstyle(1, GREEN);
   line(0, 400, 800, 400);
   floodfill(1, 401, GREEN);
   
   setfillstyle(1, LIGHTBLUE);
   floodfill(1, 1, GREEN);
}