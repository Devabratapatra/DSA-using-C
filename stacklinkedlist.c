#include<stdio.h>  
#include<stdlib.h>  
#define max 10
struct node
{
	int data;
	struct node *next;
}*new,*top=NULL,*temp;
void push();  
void pop();  
void display();  
void peek();
int main()  
{  
    int choice;  
    while (1)  
    {  
        printf("\nPerform operations on the stack:");  
        printf("\n1.Push the element\n2.Pop the element\n3.display\n4.peek the element\n5.exit");  
        printf("\n\nEnter the choice(1/2/3/4/5): ");  
        scanf("%d", &choice);  
        switch (choice)  
        {  
        case 1:  
            push();  
            break;  
        case 2:  
            pop();  
            break;  
        case 3:  
            display();  
            break;  
        case 4:  
            peek();
            break;
		case 5:
		    exit(0);  
        default:  
            printf("\nInvalid choice!!");  
        }  
    }  
}  
void push()  
{  
    int element;  
    new=(struct node*)malloc(sizeof(struct node));  
    printf("\nEnter the element to be added onto the stack: ");  
    scanf("%d", &element);  
    if (top==NULL)  
    {  
       new->data=element;
	   new->next=NULL;
	   top=new;  
    }  
    else  
    {  
	new->data=element;
	new->next=top;
	top=new; 
    }  
}  
void pop()  
{  
    if (top==NULL)  
    {  
        printf("\nUnderflow!!");  
    }  
    else  
    {  
    temp=top;
    printf("%d\n",top->data);
    top=temp->next;
    temp->next=NULL;
    free(temp);
    }  
}  
void display()  
{  
    if (top==NULL)  
    {  
        printf("\nstack is empty!!");  
    }  
    else  
    {  
    temp=top;
    printf("The stack elements are: ");
    while(temp!=NULL)
    {
    	printf("%d\n",temp->data);
    	temp=temp->next;
	}
	}
}
void peek()
{
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else
	{
    	printf("The top element of the stack is:%d\n",top->data);
	}
}