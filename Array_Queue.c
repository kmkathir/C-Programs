#include <stdio.h>

#define SIZE 5

int queue[SIZE];

int front = -1;
int rear = -1;


// ENQUEUE - Insert an element
void enqueue(int value)
{
    // Check if queue is full
    if (rear == SIZE - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    // If this is the first element
    if (front == -1)
    {
        front = 0;
    }

    // Move rear forward
    rear++;

    // Insert element
    queue[rear] = value;

    printf("%d inserted into queue\n", value);
}


// DEQUEUE - Remove an element
void dequeue()
{
    // Check if queue is empty
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("%d removed from queue\n", queue[front]);

    // Move front forward
    front++;

    // If queue becomes empty
    if (front > rear)
    {
        front = -1;
        rear = -1;
    }
}


// PEEK - Display front element
void peek()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Front element = %d\n", queue[front]);
}


// DISPLAY - Display all elements
void display()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
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

    return 0;
}
