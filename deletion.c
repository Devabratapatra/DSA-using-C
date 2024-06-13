#include <stdio.h>
#include <stdlib.h>

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
    int position,i;
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
            new->next=head;
            head->prev=new;
            tail=new;
        }
        printf("\nPress 'Y' to continue or 'N' to exit: ");
        fflush(stdin);
        scanf("%c",&ch);
    } while(ch=='y'||ch=='Y');
    temp=head;
    printf("\nYour List Elements are: ");
    while(temp->next!=head)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    printf("%d\t",temp->data);
    {
    	while(1)
    	int choice;
    printf("\n1. Insert node at begining.\n2. Insert node at Ending.\n3. Insert from specific position. \n4. Exit.");
    printf("\nEnter your choice(1/2/3/4): ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter a value which you want to insert at the begining: ");
        scanf("%d",&value);
        new=(struct node *)malloc(sizeof(struct node));
        new->prev=NULL;
        new->data=value;
        new->next=head;
        head->prev=new;
        new->prev=tail;
        tail->next=new;
        head=new;
        temp=head;
        printf("After insertion List Elements are: ");
        while(temp->next!=head)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\t",temp->data);
        break;
    case 2:
        printf("\nEnter a value which you want to insert at the ending: ");
        scanf("%d",&value);
        new=(struct node *)malloc(sizeof(struct node));
        new->prev=tail;
        new->data=value;
        new->next=head;
        head->prev=new;
        tail->next=new;
        tail=new;

        temp=head;
        printf("After insertion List Elements are: ");
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
        scanf("%d", &loc);
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
        temp->next->prev=new;
        temp->next=new;
        new->prev=temp;
    }
        printf("After insertion List Elements are: ");
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

        return 0;
    }
} 
}