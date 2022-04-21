#include<stdio.h>
int main()
{
   int a[10],n,i;
   printf("Enter the size of the Array\n");
   scanf("%d",&n);
  // input through keyboard
  for(i=0;i<n;i++)
  {
    printf("Enter %d location element : ",i);
    scanf("%d",&a[i]);
  }
    //traversing into array 
   printf("\nElements are\n");
   for(i=0;i<n;i++)
  {
   printf("The %d location element is : %d\n",i,a[i]);
  }
  return 0;
}
