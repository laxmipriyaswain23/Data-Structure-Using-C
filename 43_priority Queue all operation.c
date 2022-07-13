#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int pri_Queue[SIZE],rear=-1,front=-1;
//prototype
void enQueue_pri(int);
void deQueue();
void check(int);
void display();
void peek();
//insertion
void enQueue_pri(int val)
{
	if(rear==SIZE-1)
	{
		printf("Queue is Full..Insertion not possible\n");
		return;
	}
	if((front==-1)&&(rear==-1))
	{
		front++;
		rear++;
		pri_Queue[rear]=val;
		return;
	}
	else{
		check(val);
		rear++;
	}
}
void check(int val)
{
	int i,j;
	for(i=0;i<=rear;i++)
	{
		if(val>=pri_Queue[i])
		{
			for(j=rear+1;j>i;j--)
			{
				pri_Queue[j]=pri_Queue[j-1];
			}
			pri_Queue[i]=val;
			return;
		}
	}
	pri_Queue[i]=val;
}
void display()
{
	int x;
	if((front==-1)&&(rear==-1))
	{
		printf("\nQueue is empty");
		return;
	}
	for(x=front;x<=rear;x++)
	{
		printf("%d\t",pri_Queue[x]);
	}
}
void deQueue()
{
	if(rear==-1)
	{
		printf("Queue is empty..Nothing to delete\n");
	}
	else
	{
		printf("%d deleted successfully..\n",pri_Queue[front]);
		front++;
	}
}
void peek()
{
	if(rear==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The top element is %d",pri_Queue[front]);
	}
}
int main()
{
	int choice,ele;
	printf("\n----Select Anyone-----\n");
	while(1)
	{
		printf("\n~~~~~~Priority Queue Story~~~~~~~\n");
		printf("\n1.enQueue_pri\n2.deQueue\n3.display\n4.peek\n5.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to enQueue into the Queue\n");
				scanf("%d",&ele);
				enQueue_pri(ele);
				break;
			case 2:
			    deQueue();
				break;
			case 3:
			    display();
				break;
			case 4:
			    peek();
				break;
			case 5:
			    exit(0);
				break;
			default:
			    printf("Invalid choice..Try again\n");					
		}
	}
	return 0;
}
