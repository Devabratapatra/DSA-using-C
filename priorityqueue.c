#include<stdio.h>
#include<stdlib.h>
void insert();
void del();
void display();
struct node
	{
	int priority;
	int info;
	struct node *next;
}*front=NULL,*temp,*q,*ptr;
int main()
{
	int choice;
	while(1)
	{
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				del();
				break;
			case 3:
				display();
				break;
			case 4:
			break;
				default :
				printf("Wrong choice\n");
		}
	}
}
void insert(int item,int priority)
{
	int added_item,item_priority;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Input the item value to be added in the queue : ");
	scanf("%d",&added_item);
	printf("Enter its priority : ");
	scanf("%d",&item_priority);
	temp->info=added_item;
	temp->priority=item_priority;
	if(front==NULL||item_priority<front->priority)
	{
		temp->next=front;
		front=temp;
	}
	else
	{
		q=front;
		while(q->next!=NULL && q->next->priority<=item_priority )
		q=q->next;
		temp->next=q->next;
		q->next=temp;
	}
}
void del()
{
	if(front==NULL)
		printf("Queue Underflow\n");
	else
	{
		temp=front;
		printf("Deleted item is %d\n",temp->info);
		front=front->next;
		free(temp);
	}
}
void display()
{
	ptr = front;
	if(front == NULL)
		printf("Queue is empty\n");
	else
	{	
		printf("Queue is :\n");
		printf("Priority       Item\n");
		while(ptr!=NULL)
		{
			printf("%5d        %7d\n",ptr->priority,ptr->info);
			ptr=ptr->next;
		}
	}
}