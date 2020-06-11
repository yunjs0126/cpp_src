#include <stdio.h>

int stack[10];
int tos;        // top of stack

void push(int data)
{
    stack[tos] = data;
    ++tos;
}

int pop(void)
{
    --tos;
    return stack[tos];
}

int main(void)
{
    push(100);
    push(200);
    push(300);

    printf("1st pop() : %d\n", pop());
    printf("2nd pop() : %d\n", pop());
    printf("3rd pop() : %d\n", pop());

    return 0;
}