#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int low=0,high=9,key=50,mid,found;
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
		printf("Success..");
	}
	else
	{
		printf("Serach fail..");
	}
	return 0;
}
