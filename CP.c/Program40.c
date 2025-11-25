#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int stack[SIZE];
int top=-1;
void push(int value)
{
    if(top==SIZE-1)
    {
        printf("Stack Overflow! Cannot push %d\n",value);
    }
        else 
        {
            stack[++top]=value;
            printf("%d pushed to stack\n");
        }
}
    void pop()
    {
        if(top==-1)
        { 
            printf("Stack Underflow! Cannot pop\n");
        }
        else {
            printf("%d popped from stack\n",stack[top--]);
        }
    }
    void display()
    {
        if(top==-1)
        {
            printf("Stack is empty\n");
        }
        else {
            printf("Stack elements:\n");
            for(int i=top;i>=0;i--)
            {
                printf("%d\n",stack[i]);
                printf("\n");
            }
        }
    }
