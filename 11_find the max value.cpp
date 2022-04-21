#include<stdio.h>
int main()
{
	int a[10],max=a[0];
	int i,size;
	printf("Enter the size of an array(MAX-10)\n");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=size;i++)
	{
		if(max<=a[i])
		{
			max=a[i];
		}
	}
	printf("Max is %d",max);
	return 0;
}
