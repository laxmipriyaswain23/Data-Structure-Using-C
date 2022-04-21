#include<stdio.h>
//prototype
void quickSort(int [],int,int);
int partition(int[],int,int);
 
 //body part of quickSort()
void quickSort(int arr[],int start,int end)
{
	if(start<end)
	{
		int pIndex=partition(arr,start,end);
		quickSort(arr,start,pIndex-1);
		quickSort(arr,pIndex+1,end);
	}
}
//body part of partition()
int partition(int arr[],int start,int end)
{
	int pivot=arr[end];
	int i=start;
	int pIndex=start;
	int temp;
	
	for(i=start;i<end;i++)
	{
		if(arr[i]<pivot)
		{
			//swap in between pIndex and i
			temp=arr[pIndex];
			arr[pIndex]=arr[i];
			arr[i]=temp;
			pIndex++;
		}
	}
	//swap in between pIndex and end(pivot)
	temp=arr[pIndex];
	arr[pIndex]=arr[end];
	arr[end]=temp;
	return pIndex;
}
int main()
{
	int arr[10]={10,30,45,56,76,87,99,32,33,20},i;
	printf("Before sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	quickSort(arr,0,9);
	printf("\nAfter sorting\n");
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
