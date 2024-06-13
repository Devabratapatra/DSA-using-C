#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		struct node *prev;
		int data;
		struct node *next;
	}*new,*head=NULL,*tail=NULL,*temp;
	int value;
	char ch;
	do
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter value for node: ");
		scanf("%d",&value);
		new->prev=NULL;
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
			new->prev=tail;
			tail=new;
		}
		printf("\npress'Y'to contiune and press'N'to exit: ");
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
}