#include<stdio.h>
int main()
{
	int a[10]={90,60,40,50,30,20,10,70,80,100},i,j,temp;
	printf("Before sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	//swaping part
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
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
