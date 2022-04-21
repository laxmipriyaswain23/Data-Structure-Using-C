#include<stdio.h>
int main()
{
   int a[10],n,i,ele,loc;
 
   printf("Enter the size of an array\n");
   scanf("%d",&n);
   //input from the keyboard
   for(i=0;i<n;i++)
   {
   	printf("Enter %d location element;\n",i);
   	scanf("%d",&a[i]);
   }
   //element and location
   printf("Enter the element to insert:\n");
   scanf("%d",&ele);
   printf("Enter the location :\n");
   scanf("%d",&loc);
   //shifting 
   for(i=n;i>loc;i--)
   {
   	a[i]=a[i-1];
   }
   //insert now
   a[loc]=ele;
   //increase size
   n++;
   //traversing the array
   printf("\n Elements are\n");
   for(i=0;i<n;i++)
   {
   	printf("The %d location element is :%d\n",i,a[i]);
   }
 return 0;
}
