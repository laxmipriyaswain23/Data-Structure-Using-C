#include<stdio.h>
int main()
{
	int a[10],i,size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	printf("All negative elements in array are:\n");
	for(i=0;i<size;i++)
	{
		if(a[i]<0)
		{
			printf("%d\n",a[i]);
		}
	}
	return 0;
}
