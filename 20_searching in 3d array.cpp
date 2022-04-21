#include<stdio.h>
int main()
{
	int a[6][4][3];
	int i,j,k,key,found=0;
	printf("Enter the value for the matrix\n");
	for(i=0;i<6;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<3;k++)
			{
				printf("Enter the [%d][%d][%d] location value:",i,j,k);
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Enter the element you want to search\n");
	scanf("%d",&key);
	for(i=0;i<6;i++)
	{
		for(j=0;j<4;j++)
		{
			for(k=0;k<3;k++)
			{
				if(a[i][j][k]==key)
				{
					found=1;
					break;
				}
			}
		}
	}
	if(found==1)
	{
		printf("Search success\n");
	}
	else
	{
		printf("Element not found\n");
	}
	return 0;
}
