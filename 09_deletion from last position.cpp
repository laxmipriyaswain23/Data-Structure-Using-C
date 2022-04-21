#include<stdio.h>
int main()
{
	int a[10];
	int i,size;
	//collect size
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
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
