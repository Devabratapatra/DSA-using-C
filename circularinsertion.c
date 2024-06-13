#include<stdio.h>
#include<stdlib.h>
int main()
{
 struct node
    {
      int data;
    struct node* next;
    }*new,*head=NULL,*tail=NULL,*temp;
    int value;
    char ch;
    do
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter an element for node: ");
        scanf("%d", &value);
        new->data=value;
        new->next=NULL;
        if (head==NULL)
        {
            head=new;
            tail=new;
        }
        else
        {
            tail->next = new;
            tail=new;
            tail->next=head;
        }
        printf("\nPress 'Y' to continue or 'N' to exit: ");
        fflush(stdin);
        scanf(" %c", &ch);
    } while (ch=='y'||ch=='Y');
    temp=head;
    printf("Your List Elements are: \n");
    while (temp->next!=head)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
printf("%d\t",temp->data);
int choice;
printf("\n1.Insert node at beginning.\n2.Insert node at ending.\n3. Insert node at the specific position.\n4.Exit");
printf("\nEnter your choice(1/2/3/4):");
scanf("%d",&choice);
switch(choice)
{
//	Insertion from beginning
	case 1:
		printf("\nEnter a value which you want to insert at the beginning: ");
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		new->data=value;
		new->next=head;
		tail->next=new;
		head=new;
		temp=head;
		printf("\nAfter insertion list elements are: ");
		while(temp->next!=head)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
		break;
//		Insertion from ending
	case 2:
		printf("\nEnter a value which you want to insert at the ending: ");
		new=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&value);
		
		new->data=value;
		tail->next=new;
		new->next=head;
		tail=new;
		temp=head;
		printf("\nAfter insertion list elements are: ");
		while(temp->next!=head)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
		break;
//		Insertion from specific position
	case 3:
		new=(struct node*)malloc(sizeof(struct node));
		int pos,i;
		printf("\nEnter a value which you want to insert at the specific position: ");
		scanf("%d",&value);
		printf("\nEnter a position number which you want to insert: ");
		scanf("%d",&pos);
		temp=head;
		new->data=value;
		tail->next=NULL;
		for(i=1;i<pos-1;i++)
		{
			temp=temp->next;
		}
		new->next=temp->next;
		temp->next=new;
		temp=head;
		printf("\nAfter insertion list elements are: ");
		while(temp->next!=head)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
		printf("%d ",temp->data);
		break;
		default:
		exit(1);
}
}