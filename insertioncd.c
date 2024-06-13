#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node
	{
		struct node* prev;
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
		printf("\nPress 'Y' to continue or Press 'N' to exit: ");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
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
    	int choice,position,i;
printf("\n1.Insert element at beginning.\n2.Insert element at ending.\n3.Insert element at specific position\n4.exit");
printf("\nEnter your choice(1/2/3/4):");
scanf("%d",&choice);
switch(choice)
{
	case 1:
		printf("\nEnter at the value insert beginning:");
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		new->prev=NULL;
		new->data=value;
		new->next=head;
		head->prev=new;
		tail->next=new;
		head=new;
		head->prev=tail;
		temp=head;
		printf("\nAfter insertion list elements are:");
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
		break;
	case 2:
		printf("\nEnter at the value insert ending:");
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		new->data=value;
		new->next=head;
		new->prev=tail;
		tail->next=new;
		tail=new;
		head->prev=tail;
		temp=head;
		printf("\nAfter insertion list elements are:");
		while(temp->next!=head)
		{
			printf("%d\t",temp->data);
			temp=temp->next;
		}
		printf("%d\t",temp->data);
		break;
	case 3:
        {
        printf("\nEnter the position number which you want insert: ");
        scanf("%d",&position);
        temp=head;
        for(i=1;i<position-1;i++)
        {
            temp=temp->next;
        }
        printf("\nEnter a value which you want to insert: ");
        scanf("%d",&value);
        new=(struct node *)malloc(sizeof(struct node));
        new->data=value;
        new->next=temp->next;
        new->prev=temp;
        temp->next=new;
        temp->next->prev=new;
    }
        printf("\nAfter insertion List Elements are: ");
        temp=head;
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
}