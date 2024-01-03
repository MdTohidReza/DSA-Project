struct node
{
  int data;
  struct node *next;
};
struct node *newNode;// insert at the begining
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = head;
head = newNode;

struct node *newNode;// insert at the end
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = NULL;

struct node *temp = head;
while(temp->next != NULL){
  temp = temp->next;
}

temp->next = newNode;


struct node *newNode;//insert at the middle
newNode = malloc(sizeof(struct node));
newNode->data = 4;
newNode->next = NULL;

struct node *temp = head;
while(temp->next != NULL)
{
  temp = temp->next;
}

temp->next = newNode;

head = head->next;//deletion from begining



struct node* temp = head;// deletion from end
while(temp->next->next!=NULL)
{
  temp = temp->next;
}
temp->next = NULL;



for(int i=2; i< position; i++) // deletion from middle
{
  if(temp->next!=NULL) {
    temp = temp->next;
  }
}

temp->next = temp->next->next;
