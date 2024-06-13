#include <stdio.h>
int main() 
{
   int arr[5]={5,2,1,4,3};
   int n=5;
   int i,j,min,temp;
   for (i=0;i<(n-1);i++) {
      min=i;
      for (j=i+1;j<n;j++)
	   {
         if (arr[j]>arr[min])
            min=j;
         temp=arr[j];
         arr[j]=arr[min];
         arr[min]=temp;
      }
   }
   for (i=0;i<n;i++)
      printf("%d\t", arr[i]);
}