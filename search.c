#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int lb=0,ub=4,flag=0,k,pos;
	k=40;
	while(lb<=ub)
	{
		pos=(lb+(k-a[lb])/(a[ub]-a[lb])*(ub-lb));
		if(a[pos]==k)
		{
			flag=1;
			break;
		}
		else if(a[pos]<k)
		{
			lb=pos+1;
		}
		else
		{
			ub=pos-1;
		}
	}
	if(flag==1)
	{
		printf("Seraching Successful. Its position is:->%d",pos);
	}
	else
	{
		printf("Searchig Unsuccessful.");
	}
}