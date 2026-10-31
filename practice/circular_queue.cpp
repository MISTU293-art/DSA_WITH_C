#include <iostream>
using namespace std;
#define MAX 3
int queue[MAX];
int front = -1, rear = -1;
int i;

void enqueue()
{
    if ((rear+1)%MAX==front)
    {
        cout << "\n Queue Overflow";
        return;
    }

    int val;
    cout << "\n Enter Value:";
    cin >> val;
    if (rear == -1)
    {
        rear = front = 0;
        queue[rear] = val;
    }
    else
    {
        rear=(rear+1)%MAX;
        queue[rear] = val;
    }
    cout << "\n Push Element:" << val;
}

void dequeue()
{
    if (front == -1)
    {
        cout << "\n Queue Underflow";
        return;
    }

    int val;
    val = queue[front];
    if (front == rear)
    {
        rear = front = -1;
    }
    else
    {
        front=(front+1)%MAX;
    }
    cout << "\n Deleted Element:" << val;
}

void display()
{
    if (front == -1)
    {
        cout << "Queue Is Empty";
        return;
    }
    else
    {
        cout << "Element";
        for (i = front; i <= rear; i++)
        {
            cout << queue[i] << "\n ";
        }
    }
}

int main()
{
    int op;
    while (1)
    {
        cout << "\n 1.Enqueue 2.Dequeue  3.Display";
        cout << "\n Enter [1-4]:";
        cin >> op;
        switch (op)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        default:
            cout << "Invalid Choice!!";
        }
    }
}