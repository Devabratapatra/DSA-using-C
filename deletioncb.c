#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        struct node *prev;
        int data;
        struct node *next;
    } *new,*head=NULL,*tail=NULL,*temp;

    int value;
    char ch;
    do
    {
        new=(struct node *)malloc(sizeof(struct node));
        printf("\nEnter an element for node: ");
        scanf("%d",&value);
        new->data=value;
        new->prev=NULL;
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
        printf("\nPress'Y' to continue or Press'N' to exit: ");
        fflush(stdin);
        scanf("%c",&ch);
        } 
	while(ch=='Y'||ch=='y');
    temp=head;
    printf("\nThe List elements are: ");
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }

    while(1)
    {
        int choice,pos,i;
        ;
        printf("\n1.Deletion from Beginning in doubly circular linked list.\n2.Deletion from Ending in doubly circular linked list.\n3.Deletion from specific position in doubly circular linked list.\n4.Exit");
        printf("\nEnter your choice(1/2/3/4): ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            temp=head;
            head=head->next;
            temp->next=NULL;
            temp->prev=NULL;
            head->prev=tail;
            temp=head;
            printf("\nAfter deletion from beginning list elements are: ");
            while(temp->next!=NULL)
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
            temp->next=NULL;
            tail->next=head;
            temp=head;
            printf("\nAfter deletion from ending position list elements are: ");
            while(temp->next!=head)
            {
                printf("%d\t",temp->data);
                temp=temp->next;
            }
            printf("%d\t",temp->data);
            break;
        case 3:
            printf("\nEnter the position number which you want to delete: ");
            scanf("%d",&pos);
            temp=head;
            for (i=1;i <pos-1;i++)
            {
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;
            temp=head;
            printf("\nAfter deletion from specific position list elements are: ");
            while(temp->next!=head)
            {
                printf("%d\t", temp->data);
                temp=temp->next;
            }
            printf("%d",temp->data);
            break;
            default:
            exit(1);
        }
    }
}