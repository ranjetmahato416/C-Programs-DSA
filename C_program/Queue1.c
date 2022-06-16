#include<stdio.h>
#define n 5
int main()
{
	int queue[n],front=0,rear=0,i,ch,x=n;
	start:
	printf("\n1.Insertion\n2.deletion\n3.Display\n4.Exit.\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: if(rear==x)
					printf("\nQueue is Full.\n");
				else{
					printf("Enter the number.\n");
					scanf("%d",&queue[rear++]);
				}
				break;
		case 2: if(rear=front)
					printf("\nQueue is Empty.\n");
				else{
					printf("Deleted item is %d.\n",queue[front++]);
					x++;
				}
				break;
		case 3: if(rear==front)
					{
						printf("\nQueue is Empty.\n");
					}
				else{
					for(i=0;i<rear;i++)
					{
						printf("%d\t",queue[i]);
					}
				}
				break;
		case 4: exit(0);
	}
	goto start;
}
