#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *temp;

    // Allocate memory
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // First node
    head->data = 10;
    head->next = second;

    // Second node
    second->data = 20;
    second->next = third;

    // Third node
    third->data = 30;
    third->next = NULL;

    // Traversing the linked list
    temp = head;

    printf("Linked List: ");

    while(temp != NULL)
    {
        printf("%d ", temp->data);

        // Move to next node
        temp = temp->next;
    }

    return 0;
}
