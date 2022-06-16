#include<stdio.h>
#include<conio.h>
#define SIZE 5
struct cqueue{
	int item[SIZE];
	int rear, front;
};
typedef struct cqueue qu;
void insert(qu*);
void delete(qu*);
void display(qu*);

void insert(qu *q)
{
	int d;
	if((q->rear+1)%SIZE==q->front)
	{
		printf("Queue overflow\n");
	}
	else{
		q->rear=(q->rear+1)%SIZE;
		printf("Enter the data:");
		scanf("%d", &d);
		q->item[q->rear]=d;
		
	}
}
void delete(qu *q)
{
	if(q->rear==q->front)
	{
		printf("Queue is empty\n");
		
	}
	else{
		q->front=(q->front+1)%SIZE;
		printf("Deleted item: %d",q->item[q->front]);
	}
}
void display(qu *q)
{
	int i;
	if(q->rear==q->front)
	{
		printf("Queue is empty\n");
		
	}
	else{
		printf("Elements of queue are:\n");
		for(i=(q->front+1)%SIZE;i!=q->rear;i=(i+1)%SIZE)
		{
			printf("%d",q->item[i]);
		}
		printf("%d",q->item[q->rear]);
	}
	
}

void main()
{
	int choice;
	qu *q;
	q->front=SIZE-1;
	q->rear=SIZE-1;
	printf("\tMenu\n");
	printf("1.Insertion\n2.Deletion\n3.Display\n4.Exit\n");
	do{
		printf("Enter your choice.");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: insert(q);
		break;
		case 2: delete(q);
		break;
		case 3: display(q);
		break;
		case 4: exit(1);
		break;
		default: printf("Wrong Input.\n");
	}
	}while(choice<5);
}
