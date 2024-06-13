#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int lb=0,ub=4,flag=0;
	int mid,k;
	k=50;
	while(lb<=ub)
	{
		mid=(lb+ub)/2;
		if(a[mid]==k)
		{
			flag=1;
			break;
		}
		else if(a[mid]<k)
		{
			lb=mid+1;
		}
		else
		{
			ub=mid-1;
		}
	}
	if(flag==1)
	{
		printf("seraching is sucessful. The value index number is:%d",mid);
	}
	else
	{
		printf("searchig unsucessful. The value is not found.");
	}
}