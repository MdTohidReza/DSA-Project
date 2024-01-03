#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void peek();
void display();

int main()
{
	int choice;
	printf("*****MENU*****\n");
	printf("Enter:\n 1 for push\n 2 for pop\n 3 for peek\n 4 display\n 5 for exit\n");
	while(1)
	{
		printf("\nEnter your choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
			    peek();
				break;
			case 4:
				display();
				break;
			case 5:
				exit(0);
				break;
		}
	}
	return 0;
}
void push()
{
	int data;
	if(top==size-1)
	{
		printf("stack is overflow\n");
	}
	else
	{
		printf("enter the data = ");
	    scanf("%d",&data);
		top++;
		stack[top]=data;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
		printf("stack is underflow\n");
	}
	else
	{
		item=stack[top];
		top--;
		printf("popped item=%d\n",item);
	}
}
void peek()
{
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		printf("top of stack =%d\n",stack[top]);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
}
