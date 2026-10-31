#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};

int main(){
    int item;
    struct Node *head=(struct Node*)malloc(sizeof(struct Node *));
    printf("\n enter data:");
    scanf("%d",&item);
    head->data=item;
    head->next=NULL;

    printf("\n element:%d",head->data);
    free(head);
}