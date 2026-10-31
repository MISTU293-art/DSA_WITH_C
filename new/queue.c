#include <stdio.h>
#include <stdlib.h>
int front = -1, rear = -1, i;
int queue[3];
void enqueue()
{
    if (rear == front - 1)
    {
        printf("\n Queue Overflow");
        return;
    }
    int val;
    printf("\n Enter The Value:");
    scanf("%d", &val);
    if (rear == -1)
    {
        rear = front = 0;
        queue[rear] = val;
    }
    else{
        rear++;
        queue[rear]=val;
    }

}

void dequeue(){
    if(front==-1){
        printf("\n Queue Underflow");
        return ;
    }
    int val;
    printf("\n Dequeue ELement:%d",queue[front]);
    if(front==rear){
        rear=front=-1;
    }else{
        front++;
    }
}


void display(){
    if(front==-1){
        printf("\n Queue Is Empty");
        return ;
    }
    for(i=front;i<=rear;i++){
        printf("\t %d",queue[i]);
    }

}


int main(){
    int op;
    while(1){
        printf("\n 1.Enqueue 2.Dequeue 3.Display");
        printf("\n Enter Choice [1-3]:");
        scanf("%d",&op);
        switch(op){
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
                printf("\n Invalid Choice");
                            
        }
    }
}