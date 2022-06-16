#include<stdio.h>
#include<stdlib.h>
struct circularlinkedlist
{
	int info;
	struct circularlinkedlist *next;
};
void insertatfirst(struct circularlinkedlist**,int);
void insertatlast(struct circularlinkedlist**,int);
void insertafteranyposition(struct circularlinkedlist**,int,int);
void detefromfirst(struct circularlinkedlist**);
void deletefromlast(struct circularlinkedlist**);
void deletefromanyposition(struct circularlinkedlist**,int);
void display();

int main()

{
	struct circularlinkedlist *lastnode;
	int item,position,option;
	lastnode=NULL;
	
	printf("1.Insert at first\n2.Insert at last\n3.Insert after any position\n4.Delete from first\n5.Delete from last\n6.Delete from any position\n7.Display\n8.Exit\n");
	start:
	printf("\nEnter your choice:");
	scanf("%d",&option);
	switch(option)
	{
		case 1: printf("\nEnter Data:");
				scanf("%d",&item);
				insertatfirst(&lastnode,item);
				break;
		case 2: printf("\nEnter Data:");
				scanf("%d",&item);
				insertatlast(&lastnode,item);
				break;
		case 3:  printf("\nEnter Data:");
				scanf("%d",&item);
				printf("\nEnter the position to insert after:");
				scanf("%d",&position);
				insertafteranyposition(&lastnode,item,position);
				break;
		case 4: detefromfirst(&lastnode);
		break;
		case 5: deletefromlast(&lastnode);
		break;
		case 6: printf("\nEnter the position to delete:");
				scanf("%d",&position);
				deletefromanyposition(&lastnode,position);
				break;
		case 7: display(&lastnode);
		break;
		case 8: exit(0);
		break;
		default: printf("\nWrong Option\n");
	}
	goto start;
}
void insertatfirst(struct circularlinkedlist **last,int x)
{
	struct circularlinkedlist *node;
	node=(struct circularlinkedlist*)malloc(sizeof(struct circularlinkedlist));
	node->info=x;
	if(*last==NULL)
	{
		*last=node;
		node->next=*last;
	}
	else{
		node->next=(*last)->next;
		(*last)->next=node;
	}
}
void insertatlast(struct circularlinkedlist **last,int x)
{
	struct circularlinkedlist *node,*temp;
	node=(struct circularlinkedlist*)malloc(sizeof(struct circularlinkedlist));
	node->info=x;
	node->next=NULL;
	if(*last==NULL)
	{
		*last=node;
		node->next=*last;
	}
	else{
		node->next=(*last)->next;
		(*last)->next=node;
		*last=node;
	}
}
void insertafteranyposition(struct circularlinkedlist **last,int x,int pos)
{
	struct circularlinkedlist *node,*temp;
	int i;
	node=(struct circularlinkedlist*)malloc(sizeof(struct circularlinkedlist));
	node->info=x;
	temp=(*last)->next;
	for(i=0;i<pos;i++)
	{
		temp=temp->next;
	}
	node->next=temp->next;
	temp->next=node;
}
void detefromfirst(struct circularlinkedlist **last)
{
	struct circularlinkedlist *temp;
	if(*last==NULL)
	{
		printf("\nList is Empty.\n");
		return;
	}
	else if((*last)->next==*last)
	{
		temp=*last;
		*last=NULL;
		free(temp);
	}
	else{
		temp=(*last)->next;
		(*last)->next=temp->next;
		free(temp);
	}	
}
void deletefromlast(struct circularlinkedlist **last)
{
	struct circularlinkedlist *temp,*ptr;
	if(*last==NULL)
	{
		printf("\nList is Empty.\n");
		return;
	}
	else if((*last)->next==*last)
	{
		temp=*last;
		*last=NULL;
		free(temp);
	}
	else{
		temp=*last;
		ptr=(*last)->next;
		while(ptr->next!=*last)
		{
			ptr=ptr->next;
		}
		ptr->next=(*last)->next;
		*last=ptr;
		free(temp);
	}
}
void deletefromanyposition(struct circularlinkedlist **last,int pos)
{
	struct circularlinkedlist *temp,*ptr;
	int i;
	ptr=(*last)->next;
	for(i=0;i<pos;i++)
	{
		temp=ptr;
		ptr=ptr->next;
	}
	temp->next=ptr->next;
	free(ptr);	
}
void display(struct circularlinkedlist **last)
{
	struct circularlinkedlist *temp;
	if(*last==NULL)
	{
		printf("\nList is Empty.\n");
		return;
	}
	printf("\nItems of linked list are:\n");
	for(temp=(*last)->next;temp!=*last;temp=temp->next)
	{
		printf("%d\t",temp->info);
	}
	printf("%d",(*last)->info);
	
}
