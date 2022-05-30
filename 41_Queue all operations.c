#include<stdio.h>
#include<stdlib.h>
#define size 10
int Queue[size],rear=-1,front=-1;
//prototype
void enQueue(int);
void deQueue();
void display();
void peek();
//Insertion
void enQueue(int val)
{
	if(rear==size-1)
	{
		printf("Queue is full..Insertion is not possible\n");
	}
	else 
	{
		if(front==-1)
		{
			front=0;
		}
		rear++;
		Queue[rear]=val;
		printf("%d is inserted successfully\n",val);
	}
}
//deletion
void deQueue()
{
	if(front==-1)
	{
		printf("Queue is empty..Deletion not possible\n");
	}
	else
	{
		printf("%d deleted successfully..\n",Queue[front]);
		front++;
		
		if(front>rear)
		{
			front=-1;
			rear=-1;
		}
	}
}
//Display
void display()
{
	if(rear==-1)
	{
		printf("Nothing is here to print\n");
	}
	else
	{
		int i;
		printf("The elements are\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",Queue[i]);
		}
	}
}
// print top element of queue
void peek()
{
	if(rear==-1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		printf("The top element is %d\n",Queue[front]);
	}
}
int main()
{
	int choice,ele;
	printf("Select anyone....\n");
	while(1)
	{
		printf("********Queue Story********\n");
		printf("1.enQueue\n2.deQueue\n3.display\n4.peek\n5.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to enqueue into the queue\n");
				scanf("%d",&ele);
				enQueue(ele);
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
				printf("Invalid choice..choice again\n");
		}
    }
	return 0;
}
