#include<stdio.h>
#include<conio.h>
#define size 20
int main()
{
	int a[size],i,j,temp;
	printf("Enter numbers :\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n The no. in array.\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
			
		}
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
	
}
