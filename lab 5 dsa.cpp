//single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
typedef struct node NODE;
NODE*start;
void createmptylist(NODE*start)
{
	start=(NODE*)malloc(sizeof(NODE));
	start=NULL;
}
void insert_at_begin(int item)
{
	NODE*ptr;
	ptr=(NODE*)malloc(sizeof(NODE));
	ptr->data=item;
	if(start==(NODE*)NULL)
	{
		ptr->next=(NODE*)NULL;
		start=ptr;
	}
	else
	{
		ptr->next=start;
		start=ptr;
	}
}
void delete_at_begin()
{
	NODE *ptr;
	if(start==NULL)
	{
		printf("underflow\n");
		return;
	}
	ptr=start;
	start=start->next;
	free(ptr);
}
void insert_at_end(int item)
{
	NODE*ptr,*loc;
	ptr=(NODE*)malloc(sizeof(NODE));
	ptr->data=item;
	ptr->next=NULL;
	if(start==NULL)
	{
		start=ptr;
	}
	else
	{
		loc=start;
		while(loc->next!=(NODE*)NULL)
		loc=loc->next;
		loc->next=ptr;
	}
}

void delete_at_end()
{
	NODE *ptr,*temp;
	if(start==NULL)
	{
		printf("underflow\n");
		return;
	}
	ptr=start;
	while(ptr->next!=NULL)
	{
		temp=ptr;
		ptr=ptr->next;
	}
	temp->next=NULL;
	free(ptr);
}

void insert_spe(int item,int pos)
{
	struct node*newnode,*q;
	int i;
	q=start;
	for(i=1;i<pos-1;i++)
	{
		q=q->next;
		if(q==NULL)
		{
			printf("\n There are less than %d elements",pos);
			return;
		}
	}
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=q->next;
	newnode->data=item;
	q->next=newnode;
}
void delete_spe(int pos)
{ 

	NODE *previous,*current;
	int i=0;
	printf("enter the position\n");
	scanf("%d",&pos);
	previous=current=start;
	while(i<pos-1)
	{
		current=current->next;
		i++;
	}
	current=previous->next;
	previous->next=current->next;
	
	free(current);

}
// This function will display all the elements in linked list
void traverse(NODE*start)
{
	NODE*temp;
	if(start==NULL)
	{
		printf("list is empty\n");
		return;
	}
	temp=start;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}


int main()
{
	int choice,item,pos;
	createmptylist(start);
	while(1)
	{
		printf("1.insert element at begin \n");
		printf("2.insert element at end \n");
		printf("3.insert element at specify position \n");
		printf("4.delete element at begin\n");
		printf("5.delete element at end\n");
		printf("6.delete element at specified position\n");
		printf("7.Travers the list in order \n");	
		printf("8.exit \n");
		printf("Enter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the item\n");
		           scanf("%d",&item);
		           insert_at_begin(item);
		           break;
		    
		    case 2:printf("enter the item\n");
		           scanf("%d",&item);
		           insert_at_end(item);
		           break;
		    
		    case 3:printf("enter the item ans pos \n");
		           scanf("%d%d",&item,&pos);
		           insert_spe(item,pos);
		           break;
		           
		    case 4:delete_at_begin();
		          break;
		          
		    case 5:delete_at_end();
		          break;
		          
		    case 6:delete_spe(pos);
		          break;      
		    
		    case 7:printf("\n travers the list \n");
		           traverse(start);
		           break;
		    
		    case 8:exit(0);
		           break;
		           
		    default:printf("enter the valid choice \n");
		    
		}

	}
}
