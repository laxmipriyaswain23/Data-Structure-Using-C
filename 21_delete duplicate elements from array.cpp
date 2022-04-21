#include<stdio.h>
int main()
{
	int a[10],size,i,j,k;
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	printf("Enter the elements of the array\n");
	for(i=0;i<size;i++)
	{
		printf("Enter the %d location value: ",i);
		scanf("%d",&a[i]);
	}
	printf("Duplicate elements are\n");
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d\n",a[j]);
				for(k=j;k<size-1;k++)
				{
					a[k]=a[k+1];	
				}
				size--;
	            j--;
			}
		}
	}
	printf("After deletion of duplicate element\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
