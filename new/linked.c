#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

void insertbeg()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int info;
    printf("\n Enter The Value:");
    scanf("%d", &info);

    newNode->data = info;
    newNode->next = head;

    head = newNode;
}

void insertEnd()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr;
    int info;
    printf("\n Enter The Value:");
    scanf("%d", &info);

    newNode->data = info;
    newNode->next = NULL;
    ptr = head;
    if (ptr != NULL)
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
    else
    {
        head = newNode;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("\n List Is Empty");
        return;
    }
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int op;
    while (1)
    {
        printf("\n 1.Insert Beg 2.Insert End 3.Display");
        printf("\n Enter Choice[1-3] :");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            insertbeg();
            break;
        case 2:
            insertEnd();
            break;
        case 3:
            display();
            break;
        default:
            printf("\n Invalid Choice");
        }
    }
}