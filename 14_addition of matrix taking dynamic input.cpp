#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3];
	int i,j;
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
	//input for matrix b
	printf("Enter the value for b matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter b[%d][%d]location value:",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	//calculation part
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
   //output part
   printf("After addition of a and b matrix\n");
   for(i=0;i<3;i++)
   {
   	    for(j=0;j<3;j++)
   	    {
   	  	  printf("%d ",c[i][j]);
	    }
	    printf("\n");
   }
	return 0;
}
