#include<stdio.h>
int arr[100];      
int main()
{
	int n,i;
	printf("Enter the size of the array:-> ");
	scanf("%d",&n);
	printf("Enter the array elements are:->\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	merge_sort(arr,0,n-1);
	printf("After the sorted array is:->\t");
	for(i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int merge_sort(int a[],int lb,int ub)
{
  int mid;
  if(lb<ub)
  {
    mid=(lb+ub)/2;
    merge_sort(arr,lb,mid);
    merge_sort(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
  }
}
int merge(int arr[],int lb,int mid,int ub)
{
  int l1[10],l2[10];  
  int n1,n2,i,j,k;
  n1=mid-lb+1;
  n2=ub-mid;
  for(i=0;i<n1;i++)
{
    l1[i]=arr[lb+i];
}
  for(j=0;j<n2;j++)
   {
	l2[j]=arr[mid+j+1];
   }
  l1[i]=9999; 
  l2[j]=9999;
  i=0;
  j=0;
  for(k=lb;k<=ub;k++)  
  {
    if(l1[i]<=l2[j])
	{
    arr[k]=l1[i];
    i++;
    }
    else
    {
    arr[k]=l2[j];
    j++;
	}
  }
}