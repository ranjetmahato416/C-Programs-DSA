#include<stdio.h>
#include<conio.h>

int main()
{
	int seconds,second, hours, minutes;
	printf("Enter the seconds:");
	scanf("%d", &seconds);
	
	
	second = seconds%60;
	minutes = (seconds/60)%60;
	hours = seconds/3600;
	printf("Hours %d, minutes %d, seconds %d", hours, minutes, second);
	return 0;
}
