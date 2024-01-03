#include<stdio.h>
#include<stdlib.h>
#define size 5
int queue[size];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
	int choice;
	printf("****MENU****\n");
	printf("Enter:\n 1 for enqueue\n 2 for dequeue\n 3 for display\n 4 for exit\n ");
	while(1)
	{
		printf("enter choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:enqueue();
			       break;
			case 2:dequeue();
			       break;
			case 3:display();
			       break;
			case 4:exit(0);
			       break;
		}
	}
	return 0;
}
void enqueue()
{
	int data;
	if( front==-1 && rear==size-1)
	{
		printf("queue is full\n");
		return;
	}
	else
	{
		printf("enter data\n");
		scanf("%d",&data);
		rear=rear+1;
		queue[rear]=data;
	}
}
void dequeue()
{
	int item;
	if(front==-1 && rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("enter item\n");
		scanf("%d",&item);
		item=queue[front];
		front=front+1;
		printf("The dequeue=%d\t",item);
	}
}
void display()
{
    int i;
	if(front=rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		for(i=front;i<rear;i++)
		{
			printf("%d\t",queue[i]);
		}
	}
}
