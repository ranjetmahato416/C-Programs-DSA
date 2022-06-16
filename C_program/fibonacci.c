#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	int fibo(int);
	printf("Enter the number:");
	scanf("%d",&n);
	printf("nth fibonacci number is %d",fibo(n));
}
int fibo(int k)
{
	if(k==1 || k==2)
	{
		return 1;
		
	}
	else{
		return fibo(k-1)+fibo(k-2);
	}
}
