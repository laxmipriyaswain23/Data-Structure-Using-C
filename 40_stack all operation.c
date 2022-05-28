#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stack[SIZE],top=-1;
//prototype
void push(int);
void pop();
void display();
void peek();
//Insertion
void push(int val)
{
	if(top==SIZE-1)
	{
		printf("Stack is full..Insertion not possible\n");
	}
	else
	{
		top++;
		stack[top]=val;
		printf("%d inserted successfully\n",val);
	}
}
//Deletion
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty...Deletion not possible\n");
	}
	else{
		printf("%d poped successfully\n",stack[top]);
		top--;
	}
}
//Display
void display()
{
	int i;
	if(top==-1)
	{
		printf("There is nothing to print\n");
	}
	else
	{
		printf("The elements are\n");
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
	}
}
//print top element of stack
void peek()
{
	if(top==-1)
	{
		printf("Stack is empty..There is nothing in the peek\n");
	}
	else{
		printf("The top element is %d\n",stack[top]);
	}
}
int main()
{
	int choice,element;
	printf("Select any one\n");
	while(1)
	{
		printf("*****STACK STORY*****\n");
		printf("1.push\n2.pop\n3.display\n4.peek\n5.stop\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter element to push into the stack\n");
				scanf("%d",&element);
				push(element);
				break;
			case 2:
			    pop();
				break;	
			case 3:
			    display();
				break;
			case 4:
			    peek();
				break;
			case 5:
			    exit(0);
			default:
			    printf("Invalid choice...plz choice again\n");				
		}
	}
	return 0;
}
