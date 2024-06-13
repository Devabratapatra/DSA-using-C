#include<stdio.h>  
#include<stdlib.h>  
#define max 4
int top=-1,stack[max],i;  
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
            printf("\nInvalid choice!");  
        }  
    }  
}  
void push()  
{  
    int element;  
    if (top==max-1)  
    {  
        printf("\nOverflow!");  
    }  
    else  
    {  
        printf("\nEnter the element to be added onto the stack: ");  
        scanf("%d", &element);  
        top++;  
        stack[top]=element;  
    }  
}  
void pop()  
{  
    if (top==-1)  
    {  
        printf("\nUnderflow!");  
    }  
    else  
    {  
        printf("\nPopped element: %d",stack[top]);  
        top--;  
    }  
}  
void display()  
{  
    if (top==-1)  
    {  
        printf("\nUnderflow!");  
    }  
    else  
    {  
        printf("\nElements present in the stack: \n");  
        for(i=top;i>=0;i--)
		{ 
        printf("%d\n",stack[i]);
	}
    } 
}
void peek()
{
	if(top!=-1)
	{
		printf("%d",stack[top]);
	}
	else
	{
		printf("Stack is empty");
	}
}