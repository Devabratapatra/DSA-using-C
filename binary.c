#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node *next;
	}*new,*head=NULL,*tail=NULL,*temp;
	int value;
	char ch;
	do
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("Enter an element for node: ");
		scanf("%d",&value);
		new->data=value;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
			tail=new;
		}
		else
		{
			tail->next=new;
			tail=new;
		}
		printf("Press 'Y' to continue or 'N' to exit: ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	temp=head;
	printf("Your List Elements are: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
   int count=0;
   temp=head;
   while (temp!=NULL)
   {count ++;
   temp=temp->next;
	   }
	   {
	   	printf("\nTotal number of nodes are %d",count++);
		}	
	   return 0;
}