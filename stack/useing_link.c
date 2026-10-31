#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void push(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node *));
    if (newNode == NULL)
    {
        printf("\n Stack Overflow");
    }
    else
    {

        newNode->data = value;
        newNode->next = top;
        top = newNode;
        printf("\n Pushed Value %d", value);
    }
}

void pop()
{
    struct Node *temp;
    if (top == NULL)
    {
        printf("\n Stack Is Overflow");
    }
    temp = top;

    printf("\n Pop Element %d", top->data);
    top = top->next;
    free(top);
}

void display()
{
    struct Node *temp;
    if (top == NULL)
    {
        printf("\n Stack Is Empty");
    }
    temp = top;
    while (temp != NULL)
    {
        printf("\n %d", temp->data);
        temp = temp->next;
    }
    printf("\n Null");
}

int main()
{
    int op;
    while (1)
    {
        printf("\n 1.Push 2.Pop 3.Display");
        printf("\n enter options[1-3]:");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            int x;
            printf("\n Enter Value:");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        }
    }
    return 0;
}