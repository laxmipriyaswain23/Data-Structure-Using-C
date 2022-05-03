#include<stdio.h>
int main()
{
	int a[10],i,largest,second,size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the value of array\n");
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1])
	{
		largest=a[0];
		second=a[1];
	}
	else{
		largest=a[1];
		second=a[0];
	}
	for(i=2;i<size;i++)
	{
		if(largest<a[i])
		{
			second=largest;
			largest=a[i];
		}
		else if(second<a[i])
		{
			second=a[i];
		}
	}
	for(i=0;i<size;i++)
	{
		printf("%d",&a[i]);
	}
	return 0;
}
