#include<stdio.h>
#include<graphics.h>
#include<conio.h>

int main()
{
 int gd=DETECT, gm;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 int x1,y1,x2,y2,x;
 float m,y,c;
 printf("ENter values");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 m=(float)(y2-y1)/(x2-x1);
 c=y1-m*x1;
 for(x=x1;x<=x2;x++)
 {
  y=m*x+c;
  putpixel(x,y,x);
  }
  getch();
  closegraph();
  return 0;
  }