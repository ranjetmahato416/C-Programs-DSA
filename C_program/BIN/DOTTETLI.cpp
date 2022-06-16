
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main(){
int gd = DETECT,gm;
float x1,x2,y1,y2,c,m,Y;
int X;
initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
printf("Enter the first point:");
scanf("%f,%f",&x1,&y1);
printf("Enter the second  point:");
scanf("%f,%f",&x2,&y2);
m=((y2-y1)/(x2-x1));
printf("\m=%f",m);
c=y1-(m*x1);
printf("\nc=%f",c);
for(X=x1;X<=x2;X++){
Y=(m*X)+c;
if(X%4<=1){
putpixel(X,Y,X%10); //for multiple color

}
}
getch();
closegraph();
}