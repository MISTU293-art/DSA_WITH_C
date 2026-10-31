#include <Stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    int i, n;
    struct Node *head = NULL;
    struct Node *temp = NULL;
    printf("\n enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
        printf("\n enter value of node %d:",i+1);
        scanf("%d",&newNode->data);

        if(head==NULL){
            head=newNode;
            temp=newNode;
        }else{
            temp->next=newNode;
            temp=newNode;
        }
    }

    temp=head;
    while(temp!=NULL){
        printf("\n value of node is %d",temp->data);
        temp=temp->next;
    }
    return 0;
}
