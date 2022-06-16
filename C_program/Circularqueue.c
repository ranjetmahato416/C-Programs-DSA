#include<stdio.h>
#include<process.h>
#define max 5
int queue[max],data,r=-1,f=-1;
void ab()
{
	printf("\n*******\n");
}
void enqueue()
{
	if(f==(r+1)%max)
	{
		printf("Queue overflow.\n");
	}
	else{
		printf("Enter Data:");
		scanf("%d",&data);
		if(f==-1)
		{
			f=0;
			r=0;
		}
		else{
			r=(r+1)%max;
		}
		queue[r]=data;
	}
}
void dequeue()
{
	if(f==-1)
	{
		printf("Queue Underflow.\n");
	}
	else{
		data=queue[f];
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else{
			f=(f+1)%max;
		}
		printf("The Dequeue element is %d\n",data);
	}
}
void display()
{
	ab();
	if(f==-1)
	{
		printf("\nNo data found in queue\n");
	}
	else{
		int i;
		if(f>r)
		{
			for(i=r;i<max-1;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
		else{
			for(i=f;i<=r;i++)
			{
				printf("%d\t",queue[i]);
			}
		}
	}
}
int main()
{
	int choice;
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
	start:
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3:printf("\nData In Queue.\n"); 
					display();
			break;
			case 4: exit(0);
			break;
			default: printf("\n Invalid Choice.\n");
		}
	goto start;
	return 0;
		
}
