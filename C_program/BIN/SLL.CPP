#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<alloc.h>

struct node
{
  int info;
  struct node *pnext;
};
struct node *pnew,*pfirst=NULL,*pthis,*ptemp;

int data,count;

void tara()
{
  printf("\n******************************************\n");
}

void nayanode()
{
  printf("data hala");
  scanf("%d",&data);
  pnew = (struct node *)malloc(sizeof(struct node));
  pnew->info = data;
}


void nifb();
void nife();
void nibxp();
void niaxp();



void ndfb();
void ndfe();
void ndaxp();
void display();

int countnode()
{
  pthis = pfirst;
  if(pfirst == NULL)
  {
     count = 0;
  }
  else
  {
	  count = 1;
	  while(pthis->pnext != NULL)
		{
			   pthis = pthis->pnext;
			   count++;
		  }
  }
  return count;
}



void main()
{
 int choice;
 clrscr();
 start:
 tara();
 printf("Singly Linked List\n");
 printf("1: node insert from the begining\n");
 printf("2: node insertion from the end\n");
 printf("3: node insert before xth position\n");
 printf("4: node insert after xth position\n");
 printf("5: node delete from the begining\n");
 printf("6: node delete from the end\n");
   printf("7: node delete at  the xposition\n");

 printf("9: Display\n0: exit from the program");
 printf("\nEnter your  choice : ");
 scanf("%d",&choice);
 switch(choice)
 {
	case 1:nifb();
	break;
	case 2:nife();
	break;
	case 3:nibxp();
	break;
	case 4:niaxp();
	break;
	case 5:ndfb();
	break;
	case 6:ndfe();
	break;
	case 7:ndaxp();
	break;
	case 9:display();
	break;
	case 0:exit(0);
	break;
	default: printf("Invalid Choice");
 }
 goto start;
 //getch();
}


void nifb()
{ nayanode();
  if(pfirst == NULL)
  {
    pnew->pnext = NULL;
    pfirst = pnew;
  }
  else
  {
    pnew->pnext = pfirst;
    pfirst = pnew;
  }
}


void nife()
{
  nayanode();
  pnew->pnext =NULL;
  if(pfirst == NULL)
  {
    pnew->pnext = NULL;
    pfirst = pnew;
  }
  else
  {
     pthis = pfirst;
     while(pthis->pnext != NULL)
     {
	pthis = pthis->pnext;
     }
     pthis->pnext = pnew;
  }
}


void nibxp()
{

  int pos;
  printf("Position haal keta keti ho :");
  scanf("%d",&pos);
  if(pos == 1)
  {
    nifb();
  }
  else if(pos > countnode())
  {
    printf("Dhaiit position badhyo ");
  }
  else
  {
    nayanode();
    pthis = pfirst;
    for(int i=1; i<(pos-1);i++)
    {
      pthis = pthis->pnext;
    }
    pnew->pnext = pthis->pnext;
    pthis->pnext = pnew;
  }
}

void niaxp()
{

  int pos;
  printf("Position haal keta keti ho :");
  scanf("%d",&pos);
  if(pos == countnode())
  {
    nife();
  }
  else if(pos > countnode())
  {
    printf("Dhaiit position badhyo ");
  }
  else
  {
    nayanode();
    pthis = pfirst;
    for(int i=1; i<(pos);i++)
    {
      pthis = pthis->pnext;
    }
    pnew->pnext = pthis->pnext;
    pthis->pnext = pnew;
  }
}

void ndfb()
{
  if(pfirst == NULL)
  {
    printf("Yeutai node chaina\n");
  }
  else
  {
	pthis = pfirst;
	pfirst = pthis->pnext;
	printf("The deleted node = %d",pthis->info);
	free(pthis);

  }
}

void ndfe()
{
  if(pfirst == NULL)
  {
    printf("Yeutai node chaina\n");
  }
  else
  {
	pthis = pfirst;
	while(pthis->pnext->pnext !=  NULL)
	{
	  pthis = pthis->pnext;
	}
	printf("The deleted node = %d",pthis->pnext->info);
	free(pthis->pnext);
	pthis->pnext = NULL;
  }
}
void ndaxp()
{
	int pos;
	printf("POsition haaal :");
	scanf("%d",&pos);
	if(pfirst==NULL)
	{
	  printf("NO data");
	}
	else
	{
	  pthis = pfirst;
	  for(int i=1;i<pos;i++)
	  {
	    pthis = pthis->pnext;
	  }
	  ptemp = pthis->pnext->pnext;
	  printf("The deleted node = %d",pthis->pnext->info);
	  free(pthis->pnext);
	  pthis->pnext = ptemp;
	}
}

void display()
{
  tara();
  if(pfirst == NULL)
  {
    printf("datai chaina kasari display huinchha\n");
    printf("Total node = %d",countnode());
  }
  else
  {
    printf("SLL ko dataharu yesta chan\n");
   printf("Total node = %d\n",countnode());
     pthis = pfirst;
     while(pthis->pnext != NULL)
     {
	printf("%d  ",pthis->info);
	pthis = pthis->pnext;
     }
     printf("%d  ",pthis->info);
  }
  tara();
}


