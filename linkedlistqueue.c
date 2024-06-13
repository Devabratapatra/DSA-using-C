#include<stdio.h>  
#include<stdlib.h>  
struct node
{
	int data;
	struct node *next;
}*new,*front=NULL,*rear=NULL,*temp;
void ENQUEUE();  
void DEQUEUE();  
void DISPLAY(); 
int main()  
{  
    int choice;
    while(1)  
    {  
        printf("\nPerform operations on the queue:");  
        printf("\n1.Enqueue the element\n2.Dequeue the element\n3.display the Queue\n4.exit.");  
        printf("\nEnter the choice(1/2/3/4): ");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
        case 1:  
        ENQUEUE();  
        break;  
        case 2:  
        DEQUEUE();  
        break;  
        case 3:  
        DISPLAY();  
        break;  
		case 4:
		exit(0);  
        default:  
        printf("\nInvalid choice!!");  
        }  
    }  
}  
void ENQUEUE()  
{  
    int element;  
    new=(struct node*)malloc(sizeof(struct node));  
    printf("\nEnter the element for Queue: ");  
    scanf("%d", &element);
	new->data=element;
	new->next=NULL;  
    if (rear==NULL)  
    {  
       front=new;
	   rear=new;  
    }  
    else  
    {  
	rear->next=new;
	rear=new; 
    }  
}  
void DEQUEUE()  
{  
    if(front==NULL)  
    {  
        printf("\nQueue is empty");  
    }  
    else  
    {  
    temp=front;
    front=front->next;
    temp->next=NULL;
    free(temp);
    }  
}  
void DISPLAY()  
{  
    temp=front;
    if (front==NULL)  
    {  
        printf("\nQueue is empty!!");  
    }  
    else  
    {  
    while(temp!=NULL)
    {
    	printf("%d\n",temp->data);
    	temp=temp->next;
	}
}
}