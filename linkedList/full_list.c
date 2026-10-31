#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

void insert()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int val;
    printf("\n Enter The Value:");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = head;
    head = newNode;
}

void insert_end()
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ptr;
    int val;
    printf("Enter The Value:");
    scanf("%d", &val);
    newNode->data = val;
    newNode->next = NULL;

    ptr = head;
    if (ptr != NULL)
    {
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next =newNode;
    }
    else
    {
        head =newNode;
    }
}

void display()
{
    if (head == NULL)
    {
        printf("\n List Is Empty");
        return;
    }
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        ptr = ptr->next;
    }
}

void delete_first()
{
    if (head == NULL)
    {
        printf("\n List Is Empty");
        return;
    }
    struct Node *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
}

void delete_end()
{
    struct Node *ptr, *temp;
    if (head == NULL)
    {
        printf("\n List Is Empty");
        return;
    }

    if (head->next == NULL){
        free(head);
        head = NULL;
    }
    else{
        ptr=head;
        while(ptr->next!=NULL){
            temp=ptr;
            ptr=ptr->next;
        }
        temp->next=NULL;
        free(ptr);
    }
   
}

void search(){
    int val,loc=0;
    printf("\n Enter The Value To Search:");
    scanf("%d",&val);
    struct Node *ptr;
    ptr=head;
    while(ptr!=NULL){
        if(ptr->data==val){
             loc;
        }
        loc++;
        ptr=ptr->next;
    }
    if(loc==0){
        printf("\n Element Not Found");
    }else{
        printf("\n Element Found");
    }
}

int main(){
    int op;
    while(1){
        printf("\n 1.Insert First 2.Insert End 3.Display 4.Delete First 5.Delete End 6.Search");
        printf("\n Enter [1-6]:");
        scanf("%d",&op);
        switch(op){
            case 1:
                insert();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                display();
                break;
            case 4:
                delete_first();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                search();
                break;
            default:
                printf("\n Invalid Choice");                        
        }
    }
}