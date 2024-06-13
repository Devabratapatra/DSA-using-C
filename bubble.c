#include<stdio.h>
#define MAX 50
int main()
{
	int a[MAX];
	int i,j,n,temp;
	printf("Enter the size of an array: ");
	scanf("%d",&n);
	if(n<=MAX)
	{
		printf("Enter the array elements:\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Before Sorting The array Elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
		printf("\n");
		//pass
		for(i=1;i<n;i++)
		{
			//traversing
			for(j=0;j<n-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		printf("After Bubble Sort the array elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	else
	{
		printf("Enter a valid size.");
	}
}