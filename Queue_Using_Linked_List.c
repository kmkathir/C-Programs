#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* Queue pointers */
struct Node *front = NULL;
struct Node *rear = NULL;

/* Function declarations */
void enqueue(int value);
void dequeue();
void display();

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Queue: ");
    display();

    dequeue();

    printf("\nAfter dequeue: ");
    display();

    enqueue(40);

    printf("\nAfter enqueue 40: ");
    display();

    return 0;
}

/* ENQUEUE - Insert at end */
void enqueue(int value)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    /* If queue is empty */
    if(front == NULL)
    {
        front = newNode;
        rear = newNode;
        return;
    }

    /* Add new node at rear */
    rear->next = newNode;

    rear = newNode;
}

/* DEQUEUE - Delete from beginning */
void dequeue()
{
    struct Node *temp;

    if(front == NULL)
    {
        printf("Queue is empty\n");
        return;
    }

    temp = front;

    front = front->next;

    /* If queue becomes empty */
    if(front == NULL)
    {
        rear = NULL;
    }

    free(temp);
}

/* Display queue */
void display()
{
    struct Node *temp;

    temp = front;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
