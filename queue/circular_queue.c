#include <stdio.h>
#define MAX 3
int queue[MAX];
int front = -1, rear = -1;
int i = 0;
void enqueue()
{
    int val;
    if ((rear + 1) % MAX == front)
    {
        printf("\n Queue Is Overflow");
        return;
    }
    printf("Enter Value:");
    scanf("%d", &val);
    if (rear == -1)
    {
        front = 0;
        rear = 0;

        queue[rear] = val;
    }
    else
    {
        rear = (rear + 1) % MAX;
        queue[rear] = val;
    }
}

void display()
{
    if (front == -1)
    {
        printf("\n Queue Is Empty");
    }

    i = front;
    while (1)
    {
        printf("%d ", queue[i]);
        if (i == rear)
        {
            break;
        }
        i = (i + 1) % MAX;
    }
    printf("\n");
}
void dequeue()
{
    int val;
    if (front == -1)
    {
        printf("\n Queue Is Underflow");
        return;
    }
    val = queue[front];
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % MAX;
    }
    printf("\n POP Element:%d", val);
}
int main()
{
    int op;
    while (1)
    {
        printf("\n 1.Enqueue 2.Display 3.Dequeue:");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            enqueue();
            break;
        case 2:
            display();
            break;
        case 3:
            dequeue();
            break;
        }
    }
}