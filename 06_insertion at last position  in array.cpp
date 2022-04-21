#include<stdio.h>
int main()
{
	int a[10];
	int i,size,ele;
	//collect size,element
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the element to insert\n");
	scanf("%d",&ele);
	for(i=0;i<size;i++)
	{
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
	}
	//insert now
	a[size]=ele;
	//increase size
	size++;
	printf("After inserting one new element we get this result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is=%d\n",i,a[i]);
	}
	return 0;
}
