#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* TOP of stack */
struct Node *top = NULL;

/* Function declarations */
void push(int value);
void pop();
void display();

int main()
{
    push(10);
    push(20);
    push(30);

    printf("Stack: ");
    display();

    pop();

    printf("\nAfter pop: ");
    display();

    push(40);

    printf("\nAfter pushing 40: ");
    display();

    return 0;
}

/* PUSH - Insert at beginning */
void push(int value)
{
    struct Node *newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;

    newNode->next = top;

    top = newNode;
}

/* POP - Delete from beginning */
void pop()
{
    struct Node *temp;

    if(top == NULL)
    {
        printf("Stack is empty\n");
        return;
    }

    temp = top;

    top = top->next;

    free(temp);
}

/* Display stack */
void display()
{
    struct Node *temp;

    temp = top;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
