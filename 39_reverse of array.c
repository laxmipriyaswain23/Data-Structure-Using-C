//wap to find reverse of array
#include<stdio.h>
int main()
{
	int a[10],i,size;
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	printf("Enter the elements of the array\n");
	for(i=0;i<=size;i++)
	{
		printf("Enter %d loc value:",i);
		scanf("%d",&a[i]);
	}
	printf("After reverse of the array\n");
	for(i=size;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
