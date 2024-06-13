#include<stdio.h>
int main() {
    int a[5], i, size, k;
    int flag = 0;
    printf("Enter the number of values: ");
    scanf("%d", &size);
    if(size<=5)
    {
    	printf("\nEnter %d values: ",size);
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("\nEnter a value which want to search: ");
    scanf("%d", &k);
    printf("Searching progress:->");
    for(i=0;i<5;i++) {
        if (k==a[i])
		{
            flag=1;
            break;
        }
    }
    if(flag==1)
	{
        printf("Searching successful.\n Your value found at index %d\n", i);
    } 
	else
	{
        printf("Unsuccessful, item not found\n");
    }
	}
else
	{
	printf("oops!!enter the size 5 and try again");
	}
}