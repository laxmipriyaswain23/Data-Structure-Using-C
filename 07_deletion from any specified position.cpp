#include<stdio.h>
int main()
{
	int a[10];
	int i,size,loc;
	//collect size and loc
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the index to delete a element\n");
	scanf("%d",&loc);
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=loc;i<=size;i++)
	{
		a[i]=a[i+1];
	}
	//decrease size
	size--;
	printf("After deletion of one element we get this result\n");
	for(i=0;i<size;i++)
	{
		printf("The %d location value is=%d\n",i,a[i]);
	}
	return 0;
}

