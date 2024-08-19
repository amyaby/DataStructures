#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
int arr_stack[SIZE];
int top = -1;

int isFull()
{
    return top == SIZE - 1;
}
int isEmpty()
{
    return top == -1;
}
void push(int data)
{
    if(isFull())
        {
            printf("stack oevrflow");
            return;
        }
        top++;
        arr_stack[top] = data;
        for (int i = 0; i <= top; i++) {
        printf("%d ", arr_stack[i]);
        }
        printf("\n");
}
int pop()
{
    if(isEmpty())
    {
        printf("stack underflow");
        return -1;
    }
    int data = arr_stack[top];
    top--;
     for (int i = 0; i <= top; i++) {
        printf("%d ", arr_stack[i]);
    }
    printf("\n");
    return data;
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
   // push(5);
    pop();
    pop();
}