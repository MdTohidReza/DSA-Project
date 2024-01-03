#include<stdio.h>
#include<stdlib.h>
#define size 5
int stack[size];
int top=-1;
void push();
void pop();
void display();

int main()
{
	int choice;
	printf("*****MENU*****\n");
	printf("Enter  : \n 1 for push\n 2 for pop \n 3 for display \n 4 for exit \n");
	while(1)
	{
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: push();
			       break;
			case 2: pop();
			        break;
			case 3:display();
			       break;
			case 4:exit(0);
			       break;
		}
	}
}
void push()
{ 
    int data;
	if(top==size-1)
	{
		printf("stack is full\n");
	}
	else
	{
		printf("enter data\n");
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
		printf("stack is empty");
	}
	else
	{
		item=stack[top];
		top--;
		printf("popped item =%d\n ",item);
	}
}
void display()
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	} 
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\t",stack[i]);
		}
	}
}
