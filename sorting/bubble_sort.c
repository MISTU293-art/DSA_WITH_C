#include <stdio.h>

int main(){
    int size,temp,i,j;
    
    printf("\n Enter The Array Size:");
    scanf("%d",&size);
    int arr[size];
    printf("\n Enter The ELements:");
    for(i=0;i<size;i++){
        printf("\n Enter Element:%d:",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++){
        for(j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    printf("\n After Sorting");
    for(i=0;i<size;i++){
        printf("\t %d",arr[i]);
    }
    return 0;
}