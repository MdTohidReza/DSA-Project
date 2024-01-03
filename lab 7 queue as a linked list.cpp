#include<stdio.h>
#include<stdlib.h>

struct queue
{
	int data;
	struct queue*next;
};
typedef struct queue*NODE;
NODE enqueue(NODE rear)
{
	NODE NewNode;
	NewNode=(NODE)malloc(sizeof(struct queue));
	printf("\ input the number to be pushed:\n");
	scanf("%d",&NewNode->data);
	NewNode->next=NULL;
     
     if(rear!=NULL)
     	rear->next=NewNode;
     	rear=NewNode;
     	return(rear);
}
NODE dequeue(NODE f,NODE r)
{
	if(f==NULL)
	{
		printf("\n queue is empty\n");
	}
	else
	{
	printf("\n The popped element is=%d\n",f->data);
	if(f!=r)
	{
		f=f->next;
	}
	else
	{
		f=NULL;
	}
}
	return(f);
}
void traverse(NODE fr,NODE re)
{
     if(fr==NULL)
     {
	printf("\n the queue is empty\n");
	
     }
     else
     {
     	printf("\n The element is =");
     	while(fr!=re)
     	{
     		printf("%d",fr->data);
     		fr=fr->next;
		};
		printf("%d",fr->data);
		printf("\n");
	 }

	
}
int main()
{
	int choice;
	NODE front,rear;
	front=rear=NULL;
	while(1)
	{
		printf("\n1.enqueue\n");
		printf("\n2.dequeue\n");
		printf("\n3.traverse\n");
		printf("\n4.exit\n");
		printf("\n Enter your choice:\n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:rear=enqueue(rear);
			       if(front==NULL)
			       {
			       	front=rear;
				   }
			       break;
			case 2:front=dequeue(front,rear);
			       if(front==NULL)
			       {
			       	rear=NULL;
				   }
			       break;
		    case 3:traverse(front,rear);
		           break;
			case 4:exit(0);
			      break;
			default: printf("\n Try Again \n");  
		}
	}
}
