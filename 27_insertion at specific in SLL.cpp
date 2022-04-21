#include<stdio.h>
#include<stdlib.h>
struct node{
		int data;
	    struct node *next;
};
struct node *head=NULL;
//prototype
void insertBegin(int);
void insertSpecific(int val,int pos);
void display();

void insertBegin(int val)
{
  struct node *newNode;
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=val;
  if(head==NULL)
  {
  	newNode->next=NULL;
  	head=newNode;
  }	
  else
  {
  	newNode->next=head;
  	head=newNode;
  }
  printf("%d value inserted at beginning\n",val);
}
void insertSpecific(int val,int pos)
{
	struct node *newNode,*temp=head;
	newNode=(struct node*)malloc(sizeof(struct node));
	newNode->data=val;
	newNode->next=NULL;
	//traversing
	while(pos!=1)
	{
		temp=temp->next;
		pos--;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	printf("%d inserted at specified position successfully\n",val);
}
void display()
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertBegin(40);
	insertBegin(30);
	insertBegin(20);
	insertBegin(10);
	printf("\nValues are\n");
	display();
	printf("After inserted at position\n");
	insertSpecific(333,3);
	display();
	return 0;
}
