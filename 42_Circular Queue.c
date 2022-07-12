#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int cQueue[SIZE],rear=-1,front=-1;
//prototype
void enQueue(int);
void deQueue();
void dis();
void peek();
//Insertion
void enQueue(int val)
{
	if((front==0&&rear==SIZE-1)||(front==rear+1))
	{
	  printf("\nCircular Queue is Full..Insertion not possible\n");
    }
    else
    {
    	if(rear==SIZE-1&&front!=0)
    	rear=-1;
    	rear++;
    	cQueue[rear]=val;
    	printf("\nInsertion Success!!!\n");
    	if(front==-1)
    	{
    		front=0;
		}
	}
}
//Deletion
void deQueue()
{
	if(front==-1&&rear==-1)
	{
		printf("Circular Queue is Empty...Deletion is not possible\n");
	}
	else
	{
		printf("Deleted element:%d\n",cQueue[front]);
		front++;
		if(front-1==rear)
		{
			front=rear=-1;
		}
		else{
			if(front==SIZE)
			front=0;
		}
	}
}
void dis()
{
	if(front==-1)
	{
		printf("Circular Queue  is empty\n");
	}
	else
	{
		int i=front;
		printf("Circular Queue elements are:\n");
		if(front<=rear)
		{
			while(i<=rear)
			{
				printf("%d\t",cQueue[i++]);
			}
		}
		else
		{
			while(i<=SIZE-1)
			printf("%d\t",cQueue[i++]);
			i=0;
			while(i<=rear)
			printf("%d\t",cQueue[i++]);
		}
	}
}
//top element of queue
void peek()
{
	if(rear==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The top element is %d",cQueue[front]);
	}
}
int main()
{
	int choice,ele;
	printf("...Select anyone..\n");
	while(1)
	{
		printf("\n***Circular Queue Story***\n");
		printf("1.enQueue\n2.deQueue\n3.dis\n4.peek\n5.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to enQueue into the queue\n");
				scanf("%d",&ele);
				enQueue(ele);
				break;
			case 2:
			    deQueue();
				break;
			case 3:
			    dis();
				break;
			case 4:
			    peek();
				break;
			case 5:
			    exit(0);
				break;
			default:
			    printf("Invalid choice...Please choice again\n");			 		
		}
	}
	return 0;
}
