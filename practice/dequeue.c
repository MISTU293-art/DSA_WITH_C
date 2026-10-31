#include <stdio.h>
int MAX =3;
int front=-1,rear=-1;
int queue[MAX];

void insert_first(){
    int val;
    if(rear==MAX-1){
        printf("\n Queue Overflow");
        return;
    }
    printf("\n Enter The Element:");
    scanf("%d",&val);
    if(rear==-1){
        rear=front=0;
        queue[rear]=val;
    }else{
        rear++;
        queue[rear]=val;
    }
}

void insert_end(){
    if((front+1)%MAX==rear){
        printf("\n Queue Overflow");
        return;
    }
    int val;
    printf("\n Enter The Value");
    scanf("%d",&val);
    if(rear)
}