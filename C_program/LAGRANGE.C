#include<stdio.h>
#include<conio.h>
#define MAX 100
int main()
{
float ax[MAX+1], ay[MAX+1], nr, dr, x, y=0;
int i,j,n,z=1;
printf("enter the value of n\n");
scanf("%d",&n);
printf("enter the set of values\n");
for(i=0;i<n;i++)
{
scanf("%f%f",&ax[i],&ay[i]);
}
while(z!=0)
{
y=0;
puts("enter the value of x for which value of y is wanted");
scanf("%f",&x);
for(i=0;i<n;i++)
{
nr=dr=1;
for(j=0;j<n;j++)
if(j!=i)
{
nr*=x-ax[j];
dr*=ax[i]-ax[j];
}
y +=(nr/dr)*ay[i];
}
printf("when x=%f y=%f\n",x,y);
printf("press 0 to quit the loop.");
scanf("%d",&z);
}
return 0;
}
