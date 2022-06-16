#include<stdio.h>
int main()
{
	int a[5]={12,23,34,45,32};
	int t,i=0;
	printf("Enter data to search.\n");
	scanf("%d",&t);
	while(i!=5 && t!=a[i])
	{
		i++;
	}
	if(t==a[i])
	{	printf("Data is found: %d at index a[%d]",a[i],i);
		}
	else{
		printf("Data not found.\n");
		}
	return 0;
}
