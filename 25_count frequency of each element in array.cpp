#include<stdio.h>
int main()
{
	int a[10],b[10],size,i,j,count;
	printf("Enter the size of an array\n");
	scanf("%d",&size);
	printf("Enter elements in the array\n");
	for(i=0;i<size;i++)
	{
		printf("Enter the %d location value:",i);
		scanf("%d",&a[i]);
		b[i]=-1;
	}
	for(i=0;i<size;i++)
	{
		count=1;
		for(j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
			 count++;
			 b[j]=0;
		    }
		}
		if(a[i]!=0)
		{
			a[i]=count;
		}
	}
	printf("Frequency of all elements of array\n");
	for(i=0;i<size;i++)
	{
		if(b[i]!=0)
		{
			printf("%d occurs %d times\n",a[i],b[i]);
		}
	}
	return 0;
}
