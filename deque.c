#include <stdio.h>
#include <stdlib.h>
#define size 5
void enqueue_front(int x);
void enqueue_rear(int x);
void dequeue_front();
void dequeue_rear();
void display();
int deque[size];
int front = -1, rear = -1;

int main() {
    enqueue_rear(7);
    enqueue_rear(8);
    enqueue_rear(9);
    enqueue_rear(10);
    enqueue_rear(11);
    display();
    enqueue_rear(13);
    return 0;
}

void enqueue_front(int x) {
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) {
        printf("The queue is full\n");
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        deque[front] = x;
    } else if (front == 0) {
        front = size - 1;
        deque[front] = x;
    } else {
        front--;
        deque[front] = x;
    }
}

void enqueue_rear(int x) 
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1)) 
	{
        printf("The queue is full\n");
    } 
	else if (front == -1 && rear == -1) 
	{
        front = rear = 0;
        deque[rear] = x;
    } 
	else if (rear == size - 1) 
	{
        rear = 0;
        deque[rear] = x;
    } 
	else 
	{
        rear++;
        deque[rear] = x;
    }
}

void dequeue_front() 
{
    if (front == -1 && rear == -1) 
	{
        printf("The queue is Empty\n");
    } 
	else if (front == rear) 
	{
        printf("the deleted element is %d\n", deque[front]);
        front = rear = -1;
    } 
	else if (front == size - 1) 
	{
        printf("The deleted element is %d\n", deque[front]);
        front = 0;
    } 
	else
	{
        printf("The deleted element is %d\n", deque[front]);
        front++;
    }
}

void dequeue_rear() 
{
    if (front == -1 && rear == -1) 
	{
        printf("The queue is Empty\n");
    } 
	else if (front == rear) 
	{
        printf("the deleted element is %d\n", deque[rear]);
        front = rear = -1;
    } 
	else if (rear == 0) 
	{
        printf("the deleted element is %d\n", deque[rear]);
        rear = size - 1;
    } 
	else 
	{
        printf("the deleted element is %d\n", deque[rear]);
        rear--;
    }
}

void display() 
{
    if (front == -1 && rear == -1) 
	{
        printf("The queue is Empty\n");
        return;
    }
    int i = front;
    printf("The Queue Elements are: ");
    for(i=front;i<=rear;i++)
    {
    	printf("%d\t",deque[i]);
	}
	printf("\n");
}