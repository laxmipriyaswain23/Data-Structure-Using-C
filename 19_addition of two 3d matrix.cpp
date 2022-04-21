#include<stdio.h>
int main()
{
	int a[4][3][3],b[4][3][3],c[4][3][3];
	int i,j,k;
	printf("Enter the value of a matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter the value of a[%d][%d][%d] index:",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
		printf("Enter the value of b matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter the value of b[%d][%d][%d] index:",i,j,k);
				scanf("%d",&b[i][j][k]);
			}
		}
	}
	printf("This is a matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	printf("This is b matrix\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",b[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	//calculation 
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				c[i][j][k]=a[i][j][k]+b[i][j][k];
			}
			printf("\n");
		}
		printf("\n\n");
	}
	printf("After addition of a and b matrix we get\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("%d ",c[i][j][k]);
			}
			printf("\n");
		}
		printf("\n\n");
	}
	return 0;
}
