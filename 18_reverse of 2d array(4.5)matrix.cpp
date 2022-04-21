#include<stdio.h>
int main()
{
	int a[4][5];
	int i,j;
	printf("Enter the value of matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("Enter value at [%d][%d]location:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=3;i>=0;i--)
	{
		for(j=4;j>=0;j--)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
