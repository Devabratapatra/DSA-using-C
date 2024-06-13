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
		printf("\nEnter a value which you want to insert at the ending: ");
	scanf("%d",&value);
	new=(struct node *)malloc(sizeof(struct node));//here is the mistake, bcz atar memory allocation ta korini ami.
	new->data=value;
	new->next=NULL;
	tail->next=new;
	tail=new;
	
	temp=head;
	printf("After insertion List Elements are: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	return 0;
}