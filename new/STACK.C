#include <stdio.h>
#define MAX 3
int top=-1,i;
int stack[MAX];

void push(){
  if(top==MAX-1){
    printf("\n Stack Overflow");
    return;
  }
  int val;
  printf("\n Enter The Element:");
  scanf("%d",&val);
  top++;
  stack[top]=val;
  

}

void pop(){
  if(top==-1){
    printf("\n Stack Underflow");
    return ;
  }
  int val;
  printf("\n Pop ELement:%d",stack[top]);
  top--;
}


void display(){
  if(top==-1){
    printf("\n Stack is Empty");
    return ;
  }

  for(i=top;i>=0;i--){
    printf("\t %d",stack[i]);
  }
}

void peek(){
  if(top==-1){
    printf("\n Stack Is Empty");
    return ;
  }
  printf("\n Peek Element:%d",stack[top]);
}



int main(){
  int op;
  while(1){
    printf("\n 1.Push 2.Pop 3.Display 4.Peek");
    printf("\n Enter Choice [1-4]:");
    scanf("%d",&op);
    switch(op){
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        peek();
        break;
      default:
        printf("\n Invalid Choice");        
    }
  }
}