#include<stdio.h>
int main()
{
	int a[10]={10,29,39,67,56,67,56,96,44,39};
	int i,j;
	printf("Duplicate elements are::");
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d\n",a[j]);
			}
		}
	}
	return 0;
}
