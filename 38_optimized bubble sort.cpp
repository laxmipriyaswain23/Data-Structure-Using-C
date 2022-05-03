#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100},i,j,temp,check;
	printf("Before sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<9;i++)
	{
		check=0;
		for(j=0;j<9-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				check=1;
			}
		}
		if(check==0)
		{
			break;
		}
	}
	printf("\nAfter sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
