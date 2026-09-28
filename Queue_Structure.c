#include <stdio.h>
#define SIZE 5

int Queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Queue is Overflow\n");
        return;
    }

    if (front == -1)
    {
        front = 0;
    }

    rear++;
    Queue[rear] = value;

    printf("%d is added into queue\n", Queue[rear]);
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Underflow\n");
        return;
    }

    printf("%d deleted from queue\n", Queue[front]);
    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is Underflow\n");
    }
    else
    {
        printf("Front element is %d\n", Queue[front]);
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is Underflow\n");
        return;
    }

    printf("Queue Elements:\n");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", Queue[i]);
    }

    printf("\n");
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    peek();

    dequeue();

    display();

    peek();

    return 0;
}
