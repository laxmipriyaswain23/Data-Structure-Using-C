#include<stdio.h>
//function prototype
void mergesort(int[],int,int);
void merge(int[],int,int,int);

//body part for mergesort()
 void mergesort(int arr[],int start,int end)
 {
    if(start<end)
    {
    	int mid=(start+end)/2;
    	mergesort(arr,start,mid);
    	mergesort(arr,mid+1,end);
    	merge(arr,start,mid,end);
	}
 }
 //body part of merge()
 void merge(int arr[],int start,int mid,int end)
 {
    int temp[10];
    int i,j,k;
    i=start;
    j=mid+1;
    k=0;
 	
    //comparison of two sorted array
    while(i<=mid && j<=end)
    {
    	if(arr[i]<arr[j])
    	{
    		temp[k]=arr[i];
    		i++;
    		k++;
		}
		else
		{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	//pending element
	while(i<=mid)
	{
		temp[k]=arr[i];
		i++;
		k++;
	}
	while(j<=end)
	{
		temp[k]=arr[j];
		j++;
		k++;
	}
	//copy all the element temp array to original array
	k=0;
	for(i=start;i<=end;i++)
	{
		arr[i]=temp[k++];
	}
 }
int main()
{
	int arr[10]={9,8,7,6,5,4,3,2,1,33},i;
	mergesort(arr,0,9);
	for(i=0;i<10;i++)
	{
		printf("%d ",arr[i]);
	}
  	return 0;
}
