#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*next;
};
typedef struct node*NODE;
NODE push(NODE top)
{
	NODE NewNode;
	int pushed_item;
	NewNode=(NODE)malloc(sizeof(NODE));
	printf("\ input the new value to be pushed on the stack:");
	scanf("%d",&pushed_item);
	NewNode->data=pushed_item;
	NewNode->next=top;
	top=NewNode;
	return(top);
}
NODE pop(NODE top)
{
	NODE temp;
	if(top==NULL)
	{
		printf("\n stack is empty\n");
	}
	else
	{
		temp=top;
		printf("\n popped item is %d\n",temp->data);
		top=top->next;
		temp->next=NULL;
		free(temp);
	}
	return(top);
}
void display(NODE top)
{
	NODE temp;
	if(top==NULL)
	{
		printf("\n stack is empty \n");
	}
	else
	{
		temp=top;
		printf("\n stack elements\n");
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->next;
		}
	}
}
int main()
{
	char opt;
	int choice;
	NODE Top=NULL;
	while(1)
	{
		printf("\n1.Push\n");
		printf("\n2.pop\n");
		printf("\n3.display\n");
		printf("\n4.exit\n");
		printf("\n Enter your choice:\n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:Top=push(Top);
			       break;
			case 2:Top=pop(Top);
			       break;
		    case 3:display(Top);
		           break;
			case 4:exit(1);
			      break;
			default: printf("\n Wrong choice\n");  
		}
	}
}
