#include<stdio.h>
int main()
{
	int a[5]={5,4,19,2,10};
	int i,j,temp,n;
	n=5;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("After Sorted Elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
}
}