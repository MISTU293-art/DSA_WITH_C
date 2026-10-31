#include <stdio.h>
#include <stdlib.h>
int i, MAX=3,Front=-1,Rear=-1;
int Queue[3];
void enqueue(){
    int x;
    if(Rear==MAX-1){
        printf("\n Queue Is Overflow");
    }
    printf("\n Enter Element:");
    scanf("%d",&x);
    if(Rear==-1){
        Front=Rear=0;
        Queue[Rear]=x;
    }else{
        Rear++;
        Queue[Rear]=x;
    }
    printf("\n Queue Element:%d",x);
    
}

void dequeue(){
    int x;
    if(Front==-1){
        printf("\n Queue Underflow");
    }
    x=Queue[Front];
    if(Front==Rear){
        Front=Rear=-1;
    }else{
        Front++;
    }
    printf("\n Dequeue Element:%d",x);
    
}
void display(){
    if(Front==-1){
        printf("\n Queue Is Empty");
    }
    for(i=Front;i<Rear;i++){
        printf("\n %d",Queue[i]);
    }
}
int main(){
    int op;
    while(1){
        printf("\n 1.Enqueue 2.Dequeue 3.Display 4.Exit");
        printf("\n Enter Choice:");
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
            case 4:
                exit(0);
                break;             
        }
    }
    return 0;
}