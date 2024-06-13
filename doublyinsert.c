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
			tail->next=head;
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
    int choice;
printf("\n1.Insert node at begining.\n2.Insert node at ending.\n3. Insert the specific position.\n4.exit");
printf("\nEnter your choice(1/2/3/4): ");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("\nEnter at the value insert begining: ");
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		new->prev=NULL;
		new->data=value;
		new->next=head;
		head->prev=new;
		tail->next=new;
		head=new;
		temp=head;
		printf("\nAfter insertion list elements are: ");
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
		break;
	case 2:
		printf("\nEnter the value insert at ending: ");
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		new->data=value;
		new->next=NULL;
		new->prev=tail;
		tail->next=new;
		new->next=head;
		tail=new;
		temp=head;
		printf("\nAfter insertion list elements are: ");
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
		break;
	case 3:
		new=(struct node*)malloc(sizeof(struct node));
		int position,i;
		printf("\nEnter at the value insert of specific posision: ");
		scanf("%d",&value);
		printf("\nEnter the which position insert the element: ");
		scanf("%d",&position);
		temp=head;
		new->data=value;
		tail->next=NULL;
		for(i=1;i<position-1;i++)
		{
			temp=temp->next;
		}
		new->next=temp->next;
		temp->next->prev=new;
		temp->next=new;
		new->prev=temp;
		temp=head;
		printf("\nAfter insertion list elements are: ");
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
		break;
		default:
		exit(1);
}
}