#include<stdio.h>
int main()
{
	int a[10]={11,22,33,44,55,66,77,88,99,110};
	int low=0,high=9,key=22,mid,found=0;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(key==a[mid])
		{
			found=1;
			break;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
		else if(key<a[mid])
		{
			high=mid-1;
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
