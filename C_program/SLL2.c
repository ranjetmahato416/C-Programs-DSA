#include<stdio.h>
#include<stdlib.h>
#include<process.h>
struct node{
	int info;
	struct node *pnext;
};
struct node *pnew,*pfirst=NULL,*pthis;
int data,count;
void newnode()
{
	printf("Enter data:\n");
	scanf("%d",&data);
	pnew=(struct node*)malloc(sizeof(struct node));
	pnew->info=data;
}
void nifb();
void nife();
void nifx();
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
		printf("\nSingly Linked List.\n");
		printf("1.Node insert from beginig.\n");
		printf("2.Node insert from end.\n");
		printf("3.Node insert from Any position.\n");
		printf("4.Display the nodes.\n");
		printf("5.Exit.\n");
		printf("Enter your choice.");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:  nifb();
			break;
			case 2: nife();
			break;
			case 3: nifx();
			break;
			case 4: display();
			break;
			case 5: exit(0);
			break;
			default: printf("\n Invalid choice.\n");
		}
		goto start;
}
void nifb()
{
	newnode();
	if(pfirst==NULL)
	{
		pnew->pnext=NULL;
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
void nifx()
{
	newnode();
	int i,pos;
	printf("Enter position.\n");
	scanf("%d\n",&pos);
	if(pos==1)
	{
		nifb();
	}
	else if(pos>countnode())
	{
		printf("position is increased.\n");
	}
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
	if(pfirst==NULL)
	{
		printf("NO DATA.\n");
	}
	else{
		printf("Data of SLL:\n");
		pthis=pfirst;
		while(pthis->pnext!=NULL)
		{
			printf("%d\t",pthis->info);
			pthis=pthis->pnext;
		}
		printf("%d\t",pthis->info);
	}
}
