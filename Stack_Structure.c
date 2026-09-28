#include<stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push( int value)
{
    if(top == SIZE -1 )
    printf("Stack Overflow");
    else{
        top++;
        stack[top] = value;
    printf("%d pushed onto stack\n",value);
    }
    
}

void pop()
{
    if(top == -1)
    printf("Stack Underflow");
    else
    {
    printf("%d deleted from stack\n",stack[top]);
    top--;
    }
}

void display()
{
    if(top == -1)
    printf("Stack is Underflow");
    else
    {
    printf("Stack elements\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d\n",stack[i]);
    }
    }
}
    
void peek()
    {
        if(top == -1)
        printf("Stack Underflow");
        else
        printf("Top Element = %d\n",stack[top]);
    }
    
    int main()
{
    push(10);
    push(20);
    push(30);

    peek();

    pop();

    peek();

    return 0;
}
