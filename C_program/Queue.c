#include<stdio.h>
#define n 5
void main()
{
	int queue[n],ch,front=0,rear=0,i,j,x=n;
	start:
	printf("\n1.Insertion\n2.Deletion\n3.Display\n4.Exit.\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			if(rear==x)
				printf("\nQueue is full\n");
			else
			{
				printf("\nEnter no %d:",j++);
				scanf("%d",&queue[rear++]);
			}
			break;
		case 2:
			if(front==rear)
			{
				printf("\n Queue is empty.\n");
			}
			else
			{
				printf("\nDeleted item is %d\n",queue[front++]);
				x++;
			}
			break;
		case 3:
			printf("\nQueue elements are:\n");
			if(front==rear)
			{
				printf("\nQueue is empty.\n");
			}
			else
			{
				for(i=front;i<rear;i++)
				{
					printf("%d",queue[i]);
					printf("\n");
				}
			}
			break;
		case 4:
			exit(0);
			
		default: printf("\nWrong Input.\n");
	}
	goto start;
	
}
