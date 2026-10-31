#include <stdio.h>
#include <stdlib.h>
int n=4, arr[200], top = -1, i;
void push();
void pop();
void display();
void peek();

void push()
{
    if (top == n - 1)
    {
        printf("\n Stack is Overflow");
    }
    else
    {
        printf("\n Enter Element:");
        scanf("%d", &arr[++top]);
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\n Stack is Underflow");
    }
    else
    {
        printf("\n pop element:%d", arr[top]);
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        printf("\n Stack is Underflow");
    }
    else
    {
        printf("\n Peek Element:%d", arr[top]);
    }
}

void display()
{
    if (top == -1)
    {
        printf("\n Stack is Underflow");
    }
    else
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n %d", arr[i]);
        }
    }
}

int main()
{
    int op;
    while (true)
    {
        printf("\n Enter Choice [1.Push 2.Pop 3.Peek 4.display 5.Exit ]:");
        scanf("%d", &op);
        switch (op)

        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("\n invalid choice");
        }
    }
}