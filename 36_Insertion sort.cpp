#include<stdio.h>
int main()
{
	int a[10]={90,60,40,50,30,20,10,70,80,100},i,j,temp;
	printf("Before sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=1;i<10;i++)
	{
		temp=a[i];        //traverse unsorted
		for(j=i-1;j>=0 && temp<a[j];j--)   //sorted
		{
			a[j+1]=a[j];  //shifting
		}
		a[j+1]=temp;  //for exact location
	}
	printf("\nAfter sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
