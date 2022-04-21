#include<stdio.h>
int main()
{
	int a[3][3];
	int i,j,key,found=0;
	//input for matrix a
	printf("Enter the value for a matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter a[%d][%d]location value:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the value that you want to search in this matrix\n");
	scanf("%d",&key);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==key)
			{
				found=1;
				break;
			}
		}
	}
	if(found==1)
	{
		printf("Success");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
