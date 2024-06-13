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
		printf("\nEnter an element for node: ");
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
		printf("\nPress 'Y' to continue or 'N' to exit: ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='Y'||ch=='y');
	temp=head;
	printf("\nYour List Elements are: ");
	while(temp->next!=head)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
    }
    printf("%d\t",temp->data);
    while(1)
{
	int choice,i,position;
		printf("\nPick any one from the list:");
		printf("\n1. Deletion from Begining.\n2. Deletion from Ending.\n3. Deletion from Specific position.\n4. Exit");
		printf("\nEnter Your choice(1/2/3/4): ");
		scanf("%d",&choice);
switch(choice)
{
  case 1:
				temp=head;
				head=head->next;
				temp->next=NULL;
				head->prev=NULL;
				temp=head;
				printf("\nAfter Deletion the Linked List is: ");
				while(temp->next!=head)
				{
					printf("%d\t",temp->data);
					temp=temp->next;
				}
				printf("%d\t",temp->data);
				break;
			case 2:
				temp=tail;
				tail=tail->prev;
				temp->prev=NULL;
				tail->next=NULL;
				temp=head;
				printf("\nAfter Deletion the Linked List is: ");
				while(temp->next!=head)
				{
					printf("%d\t",temp->data);
					temp=temp->next;
				}
				printf("%d\t",temp->data);
				break;
			case 3:
				printf("\nEnter a Position Number which you wnat to delete: ");
				scanf("%d",&position);
				temp=head;
				for(i=1;i<position-1;i++)
				{
					temp=temp->next;
				}
				temp->next=temp->next->next;
				temp->next->prev=temp;
				temp=tail;
				temp=head;
				printf("\nAfter Deletion the List is: ");
				while(temp->next!=head)
				{
					printf("%d\t",temp->data);
					temp=temp->next;
				}
				printf("%d\t",temp->data);
				break;
			    default :
				exit(1);
		}
    }
}