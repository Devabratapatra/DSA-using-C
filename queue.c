#include<stdio.h>
#include<stdlib.h>
#define size 50
void ENQUEUE();
void DEQUEUE();
void display();
int queue[size];
int rear=-1;
int front=-1;
int ele;
int main()
{
    int choice;
    while (1)
    {
        printf("1.Insert element to queue\n");
        printf("2.Delete element from queue\n");
        printf("3.Display all elements of queue\n");
        printf("4.exit\n");
        printf("Enter your choice(1/2/3/4): ");
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
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
} 
void ENQUEUE()
{
    if (rear==size-1)
    printf("Queue Overflow\n");
    else
    {
        if (front==-1)
        front=0;
        printf("Insert the element in queue: ");
        scanf("%d",&ele);
        rear++;
        queue[rear]=ele;
    }
} 
void DEQUEUE()
{
    if (front==-1||front>rear)
    {
        printf("Queue is Underflow\n");
    }
    else
    {
    	ele=queue[front];
        printf("Element deleted from queue is: %d\n",ele);
        front++;
    }
} 
void display()
{
    int i;
    if(rear==-1||front>rear)
        printf("Queue is empty\n");
    else
    {
        printf("Queue is:\n");
        for (i=front;i<=rear;i++)
        {
            printf("%d\t",queue[i]);
        }
        printf("\n");
}
}