#include<stdio.h>
#include<conio.h>
struct node
{
	int data;
	struct node *next;
};
struct node *front;
struct node *rear;
void insertion();
void deletion();
void display();
void main()
{
	int choice;
	printf("Menu\n");
	printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: insertion();
		break;
		case 2: deletion();
		break;
		case 3: display();
		break;
		case 4: exit(0);
		break;
		default: printf("Wrong input.\n");
	}
}
void insertion()
{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{printf("Queue Overflow.\n");
	}
	else{
		printf("Enter the data:");
		scanf("%d",&item);
		ptr->data=item;
		if(front==NULL)
		{front=ptr;
		rear=ptr;
		front->next=NULL;
		rear->next=NULL;
		}
		else{
			rear->next=ptr;
			rear=ptr;
			rear->next=NULL;
		}
	}
}
void deletion()
{
	struct node *ptr;
	if(front==NULL)
	{
		printf("Queue Underflow.\n");
		return 1;
	}
	else{
		ptr=front;
		front=front->next;
		free(ptr);
	}
}
void display()
{
	struct node *ptr;
	if(front==NULL)
	{
		printf("Queue is empty.\n");
	}
	else{
		while(ptr!=NUll)
		{printf("%d",ptr->data);
		ptr=ptr->next;
		}
	}
}
