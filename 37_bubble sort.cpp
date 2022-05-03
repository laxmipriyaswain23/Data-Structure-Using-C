#include<stdio.h>
int main()
{
	int a[10]={90,60,40,50,30,20,10,70,80,100},i,j,temp;
	printf("Before sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	//shifting part
	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
