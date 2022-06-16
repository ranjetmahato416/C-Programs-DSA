#include<stdio.h>
#include<conio.h>
#include<process.h>
//#include<alloc.h>
struct node
{
	int info;
	struct node *pnext;//adress field
	
};
struct node *pnew, *pfirst=NULL, *pthis;//next node
int data,count;
void ab()
{
	printf("\n*********\n");
}
void newnode()
{
	printf("Enter data:\n");
	scanf("%d",&data);
	pnew=(struct node*)malloc(sizeof(struct node));
	pnew->info=data;
}
void nifb();
void nife();
void nibxp();
void display();
int countnode()
{
	pthis=pfirst;
	count=1;
	while(pthis->pnext!=NULL)
	{
		pthis=pthis->pnext;
		count++;
	}
	return count;
}
void main()
{
	int choice;
	start:
		ab();
		printf("Singly Linked List\n");
		printf("1.Node insert from beginig.\n");
		printf("2.Node insert from end.\n");
		printf("3.Node insert from Xth position\n");
		printf("4.Display\n0.Exit\n");
		printf("Enter your choice.\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: nifb();
			break;
			case 2:nife();
			break;
			case 3:nibxp();
			break;
			case 4: display();
			break;
			case 0: exit(0);
			break;
			default: printf("Invalid input.\n");
		}
		goto start;
}
void nifb()
{
	newnode();
	if(pfirst==NULL)
	{
		pnew->pnext=NULL;
		pfirst=pnew;
	}
	else{
		pnew->pnext=pfirst;
		pfirst=pnew;
	}
}
void nife()
{
	newnode();
	pnew->pnext=NULL;
		if(pfirst==NULL)
		{
			pnew->pnext=NULL;
			pfirst=pnew;
		}
		else{
			pthis=pfirst;
			while(pthis->pnext!=NULL)
			{
				pthis=pthis->pnext;
				
			}
			pthis->pnext=pnew;
		}
	
}
void nibxp()
{
	newnode();
	int pos,i;
	printf("Enter position.\n");
	scanf("%d",&pos);
	if(pos==1)
		nifb();
	else if(pos>countnode())
		printf("Position is increased.\n");
	else{
		pthis=pfirst;
		for(i=0;i<(pos-1);i++)
		{
			pthis=pthis->pnext;
			
		}
		pnew->pnext=pthis->pnext;
		pthis->pnext=pnew;
	}
}
void display()
{
	ab();
	if(pfirst==NULL)
	{
		printf("NO DATA.\n");
	}
	else{
		printf("Data of SLL:\n\n");
		pthis=pfirst;
		while(pthis->pnext!=NULL)
		{
			printf("%d\t",pthis->info);
			pthis=pthis->pnext;
		}
		printf("%d\t",pthis->info);
	}
	ab();
}
