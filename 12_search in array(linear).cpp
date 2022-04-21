#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,300};
	int key=80,i=0,found=0;
	for(i=0;i<=9;i++)
	{
		if(a[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==1)
	{
		printf("cong!! search success");
	}
	else
	{
		printf("sry!! search fail");
	}
	return 0;
}
