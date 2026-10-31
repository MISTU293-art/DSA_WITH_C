#include <iostream>
using namespace std;
#define MAX 3
int stack[MAX];
int top=-1,i;

void push(){
    if(top==MAX-1){
        cout<<"\n Stack Overflow";
        return;
    }
    int val;
    cout<<"\n Enter Value:";
    cin>>val;
    top++;
    stack[top]=val;
}

void pop(){
    if(top==-1){
        cout<<"\n Stack Underflow";
        return;
    }
    int val;
    val=stack[top];
    top--;
    cout<<"\n Pop Element:"<<val;
}

void peek(){
    if(top==-1){
        cout<<"\n Stack Is Empty";
        return;
    }

    int val;
    val=stack[top];
    cout<<"\n Peek Element:"<<val;
}

void display(){
    if(top==-1){
        cout<<"\n Stack Is Empty";
        return;
    
    }
    cout<<"\n Element:";
    for(i=top;i>=0;i--){
        cout<<stack[i]<<"";
    }
}


int main(){
    int op;
    while(1){
        cout<<"\n 1.Push 2.Pop 3.Peek 4.Display";
        cout<<"\n Enter [1-4]:";
        cin>>op;
        switch(op){
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
            default:
                cout<<"Invalid Choice!!";    
        }
    }
}