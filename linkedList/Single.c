#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node *next;
};
struct Node *head=NULL;
void  insertion(){
    int val;
    printf("\n Enter Value:");
    scanf("%d",&val);
    struct  Node * newNode=(struct Node*)malloc(sizeof(struct Node  ));
    newNode->data=val;
    newNode->next=head;
    head=newNode;
    printf("\n Insert Element:%d",val);

}
void traversal(){

    if(head==NULL){
        printf("\n List is Empty");
    }
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL){
        printf("\n %d->",ptr->data);
        ptr=ptr->next;
    }
}
void insert_beg(){
    struct Node *newNode, *ptr;
    newNode=(struct Node *)malloc(sizeof(struct Node));
    int val;
    printf("\n Enter Value:");
    scanf("%d",&val);
    newNode->data=val;
    newNode->next=NULL;
    ptr=head;
    if(ptr!=NULL){
        while(ptr->next!=NULL){
            ptr=ptr->next;
            ptr->next=newNode;
        }
    }else{
        head=newNode;
    }
}
int main(){
    int x;
    while(1){
        printf("\n 1.Insertion 2.Traversal:");
        scanf("%d",&x);

        switch(x){
            case 1:
                insertion();
                break;
            case 2:
                traversal();
                break;    
        }
    }
}