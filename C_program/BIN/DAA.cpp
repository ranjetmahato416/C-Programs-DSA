#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main(){
int gd = DETECT,gm;
float x1,x2,y1,y2,dx,dy,x,y,steps;
float xin,yin;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
printf("Enter the first point:");
scanf("%f,%f",&x1,&y1);
printf("Enter the second  point:");
scanf("%f,%f",&x2,&y2);
dy=y2-y1;
dx=x2-x1;
if(abs(dy)>abs(dx)){
steps=abs(dy);
}
else
steps=abs(dx);
xin=dx/steps;
yin=dy/steps;
x=x1;
y=y1;
for(int i=0;i<=steps;i++){
 putpixel(x,y,BLUE);
 x=x+xin;
 y=y+yin;
}
getch();
closegraph();
}