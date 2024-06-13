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
			tail->next=head;
		}
		printf("Press 'Y' to continue or 'N' to exit: ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');
	temp=head;
	printf("\nThe list elements are: ");
	while(temp->next!=head)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}