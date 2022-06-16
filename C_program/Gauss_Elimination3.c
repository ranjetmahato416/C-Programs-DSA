#include<stdio.h>
#include<math.h>
#define N 3
int main()
{
	float a[N][N+1],x[N],t,s;
	int i,j,k;
	printf("Enter the elements of the augmented matrix rowwise\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N+1;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
	for(j=0;j<N-1;j++)
	{
		for(i=j+1;i<N;i++)
		{
			t=a[i][j]/a[j][j];
			for(k=0;k<N+1;k++)
			{
				a[i][k]=a[j][k]*t;
			}
		}
	}
	printf("The upper triangular matrix is:\n");
	for(i=0;i<N;i++)
	{
		for(j=0;j<N+1;j++)
		{
			printf("%f",a[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	for(i=N-1;i>=0;i--)
	{
		s=0;
		for(j=i+1;j<N;j++)
		{
			s+=a[i][j]*x[j];
			x[i]=(a[i][N]-s)/a[i][j];
		}
	}
	printf("The solution is:\n");
	for(i=0;i<N;i++)
	{
	
		printf("x[%d]=%f\n",i+1,x[i]);
	}
	return 0;
}
