#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,i,j,key,sum,temp,x[10],error=0,a[10][10],b[10];
	printf("Enter number of equations: ");
	scanf("%d",&n);
	printf("Enter elements rowsise: ");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=1;i<=n;i++)
	{
		j=n+1;
		b[i]=a[i][j];
	}
	for(i=1;i<=n;i++)
	{
		x[i]=b[i]/a[i][i];
	}
	do
	{
		key=0;
		for(i=1;i<=n;i++)
		{
			sum=b[i];
			for(j=1;j<=n;j++)
			{
				if(j!=i)
				{
					sum=sum-a[i][j]*x[j];
				}
			}
			temp=sum/a[i][i];
		if(key=0)
		{
			if(temp!=0)
			{
				if((fabs(temp-x[i]/temp))>error)
				{
					key=1;
				}
			}
		}
		x[i]=temp;
		}
		
	}while(key!=0);
	for(i=1;i<=n;i++)
	{
		printf("%d",x[1]);
	}
	getch();
	return 0;
}
