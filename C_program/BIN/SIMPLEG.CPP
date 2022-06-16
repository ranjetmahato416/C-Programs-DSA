#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"C:\\TURBOC\\BGI");

   circle(100,200,25);s
   closegraph();
   getch();
   return 0;

}