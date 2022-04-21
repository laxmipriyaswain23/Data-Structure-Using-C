#include<stdio.h>
int main()
{
	int a[10],b[10],c[20],i,n1,n2,j=0,m;
	printf("Enter the size of array a:");
	scanf("%d",&n1);
	printf("Enter the size of array b:");
	scanf("%d",&n2);
	printf("Enter the elements for the array a\n");
	for(i=0;i<n1;i++)
	{
		printf("Enter %d location value:",i);
		scanf("%d",&a[i]);
		c[j]=a[i];
		j++;
	}
	printf("Enter the elements for the array b\n");
	for(i=0;i<n2;i++)
	{
		printf("Enter %d location value:",i);
		scanf("%d",&b[i]);
		c[j]=b[i];
		j++;
	}
	m=n1+n2;
	printf("The merged array\n");
	for(i=0;i<m;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}
