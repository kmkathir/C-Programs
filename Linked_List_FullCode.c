/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

//Global head
struct Node *head = NULL;

//function declarations
void display();
void insertbeginning(int value);
void insertend(int value);
void deletion();
void reverse();


int main()
{
    struct Node *second;
    struct Node *third;
    
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    
    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = NULL;
    
    printf("Original LIST :\n");
    display();
    
    printf("\nList After inserting 200 at beginning \n");
    insertbeginning(200);
    display();
    
    printf("\nList after deletion at beginning\n");
    deletion();
    display();
    
    printf("\nList After Reversing\n");
    reverse();
    display();
    
    return 0;
}

void display()
{
    struct Node *temp;
    temp = head;
    
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

void insertbeginning(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode ->data = value;
    newNode -> next = head;
    head = newNode;
}

void insertend(int value)
{
    struct Node *newNode;
    struct Node *temp;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    
    if(head == NULL)
    {
        head == newNode;
    }
    
    temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}

void deletion()
{
    struct Node *temp;
    if(head == NULL)
    {
        printf("List is empty");
        return;
    }
    temp = head;
    head = head->next;
    free(temp);
}


void reverse()
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;
    
    while ( current != NULL )
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}
