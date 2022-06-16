#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
	top=-1;
	printf("Enter size of stack:");
	scanf("%d",&n);
	start:
	printf("\n1.push\n2.pop\n3.Display\n4.Exit\n");
	printf("\nEnter your choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: push();
		break;
		case 2: pop();
		break;
		case 3: display();
		break;
		default: exit(0);
	}
	goto start;
}
void push()
{
	if(top>=n-1)
	{
		printf("\nStack overflow.\n");
	}
	else
	{
		printf("Enter a value to push:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top<=-1)
	{
		printf("\nStack Underflow.\n");
	}
	else
	{
		printf("The poped element is %d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("\nThe elements in Stack :\n");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
		printf("\n");
		printf("Enter next choice.\n");
	}
	else
	{
		printf("\nThe stack is empty.");
	}
}
