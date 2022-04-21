#include<stdio.h>
int main()
{
	int a[10];
	int size,ele,i;
	//collect the size and element 
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the element to insert\n");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		printf("Enter the %d location value: ",i);
		scanf("%d",&a[i]);
	}
	//shifting
	for(i=size-1;i>=0;i--)
	{
		a[i+1]=a[i];
	}
	//insert now
	a[0]=ele;
	//increase size
	size++;
	printf("After inserting one new element we get this result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is=%d\n",i,a[i]);
	}
	return 0;
}
