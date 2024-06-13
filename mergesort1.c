#include<stdio.h>
#include<conio.h>
#define MAX 20
int a[MAX];

	void merge(int lb, int mid, int ub)
	{
	int temp[MAX];
	int i=lb;
	int j=mid+1;
	int k=lb;
	int high;
	while((i<=mid)&&(j<=ub))
	{
	  if(a[i]<=a[j])
	    temp[k++]=a[i++];
	  else
	     temp[k++]=a[j++];
	}
	while(i<=mid)
	temp[k++]=a[i++];
	while(j<=high)
	temp[k++]=a[j++];
	for(i=lb;i<=ub;i++)
	a[i]=temp[i];
	}
	void merge_sort(int lb,int ub)
	{
		int mid;
		if(lb<=ub)
		{
			mid=(lb+ub)/2;
			merge_sort(lb,ub);
			merge_sort(mid+1,ub);
			merge(lb,mid,ub);
		}
	}
	void main()
	{
		int i,n;
		clrscr();
		printf("\nEnter the number of elements: ");
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			printf("Enter element %d: ",i+1);
			scanf("%d",a[i]);
		}
		printf("\nUnsorted list is:\n");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		printf("\n");
		merge_sort(0,n-1);
		printf("\n Sorted list is:\n");
		for(i=0;i<n;i++)
		printf("%d\t",a[i]);
		getch();
	}