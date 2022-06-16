#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *front=NULL,*rear=NULL,*temp;
void create();
void delete();
void display();
int main()
{
	int choice;
	start:
	printf("\n1.create the element:\n");
	printf("2.Delete the element:\n");
	printf("3.Display the elements:\n");
	printf("4.Exit\n");
	printf("Enter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: create();
		break;
		case 2: delete();
		break;
		case 3: display();
		break;
		case 4: return(0);
		default: printf("\nInvalid choice.\n");
	}
	goto start;
}
void create()
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the node value:");
		scanf("%d",&newnode->info);
		newnode->next=NULL;
		if(rear==NULL)
			front=rear=newnode;
		else
		{
			rear->next=newnode;
			rear=newnode;
		}
		rear->next=front;
	}
	void delete()
	{
		temp=front;
		if(front==NULL)
			printf("UNDERFLOW\n");
		else
		{
			if(front==rear)
			{
				printf("%d",front->info);
				front=rear=NULL;
			}
			else
			{
				printf("%d",front->info);
				front=front->next;
				rear->next=front;
			}
			temp->next=NULL;
			free(temp);
		}
	}
	void display()
	{
		temp=front;
		if(front==NULL)
			printf("Empty\n");
		else
		{
			printf("\n");
			for(;temp!=rear;temp=temp->next)
				printf("%d\t",temp->info);
		}
	}

