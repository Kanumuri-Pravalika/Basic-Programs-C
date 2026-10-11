#include <stdio.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int marks)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top] = marks;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d ", stack[top]);
        top--;
    }
}

int main()
{
    int marks[5] = {65, 85, 72, 60, 90};
    int i;

    for (i = 0; i < 5; i++)
    {
        if (marks[i] > 70)
        {
            push(marks[i]);
        }
    }

    printf("Stack contents: ");

    while (top != -1)
    {
        pop();
    }

    return 0;
}
