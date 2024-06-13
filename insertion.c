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
	int choice;
	printf("\n1. Insert node at begining.\n2. Insert node at Ending.\n3. Exit.");
	printf("\nEnter your choice(1/2/3): ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\nEnter a value which you want to insert at the begining: ");
	scanf("%d",&value);
	new=(struct node *)malloc(sizeof(struct node));//here is the mistake, bcz atar memory allocation ta korini ami.
	new->data=value;
	new->next=head;
	head=new;
	
	temp=head;
	printf("After insertion List Elements are: ");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	break;
	case 2:
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
	break;
	default: exit(1);
    }
	return 0;
}