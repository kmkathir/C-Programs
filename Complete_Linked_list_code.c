#include <stdio.h>
#include <stdlib.h>

// Structure of a node
struct Node
{
    int data;
    struct Node *next;
};

// Head pointer
struct Node *head = NULL;


// Insert at beginning
void insertBeginning(int value)
{
    struct Node *newNode;

    // Allocate memory
    newNode = (struct Node *)malloc(sizeof(struct Node));

    // Store data
    newNode->data = value;

    // Connect new node to old head
    newNode->next = head;

    // Make new node the head
    head = newNode;
}


// Insert at end
void insertEnd(int value)
{
    struct Node *newNode;
    struct Node *temp;

    // Allocate memory
    newNode = (struct Node *)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->next = NULL;

    // If list is empty
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    // Traverse to last node
    temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect last node to new node
    temp->next = newNode;
}


// Display linked list
void display()
{
    struct Node *temp = head;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Linked List: ");

    while(temp != NULL)
    {
        printf("%d ", temp->data);

        // Move to next node
        temp = temp->next;
    }

    printf("\n");
}


// Delete from beginning
void deleteBeginning()
{
    struct Node *temp;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    // Store current head
    temp = head;

    // Move head to next node
    head = head->next;

    // Delete old head
    free(temp);
}


// Delete from end
void deleteEnd()
{
    struct Node *temp;
    struct Node *last;

    if(head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    // If only one node exists
    if(head->next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }

    temp = head;

    // Find second-last node
    while(temp->next->next != NULL)
    {
        temp = temp->next;
    }

    // Store last node
    last = temp->next;

    // Remove connection to last node
    temp->next = NULL;

    // Free last node
    free(last);
}


// Search an element
void search(int value)
{
    struct Node *temp = head;

    while(temp != NULL)
    {
        if(temp->data == value)
        {
            printf("Element found\n");
            return;
        }

        temp = temp->next;
    }

    printf("Element not found\n");
}


// Count nodes
void countNodes()
{
    int count = 0;
    struct Node *temp = head;

    while(temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    printf("Number of nodes = %d\n", count);
}


// Reverse linked list
void reverse()
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while(current != NULL)
    {
        // Save next node
        next = current->next;

        // Reverse pointer
        current->next = prev;

        // Move prev forward
        prev = current;

        // Move current forward
        current = next;
    }

    // Update head
    head = prev;
}


// Main function
int main()
{
    // Insert elements
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);

    display();

    // Insert at beginning
    insertBeginning(5);

    display();

    // Search
    search(20);

    // Count nodes
    countNodes();

    // Delete first node
    deleteBeginning();

    display();

    // Delete last node
    deleteEnd();

    display();

    // Reverse list
    reverse();

    display();

    return 0;
}
