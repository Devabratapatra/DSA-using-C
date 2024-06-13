#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		int data;
		struct node * next;
	}*new,*head=NULL,*tail=NULL,*temp,*current,*after,*bef=NULL;
	
	int value;
	char ch;
	do
	{
		new=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter an Element for node: ");
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
		printf("\nPrees 'Y' to continue or Press 'N' to stop: ");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='Y');
	temp=head;
	printf("\nThe Created Linked List is: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
//	Reverse Link List:-
	current=head;
	while(current!=NULL)
	{
		after=current->next;
		current->next=bef;
		bef=current;
		current=after;
	}
	head=bef;
	temp=head;
	printf("\nThe reverse linked list is: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}