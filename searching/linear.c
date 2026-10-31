#include <stdio.h>
int main(){
    int n,arr[200],i,key,loc=0;
    printf("\n Enter The Length:");
    scanf("%d",&n);
    printf("\n Enter The Elements:");
    for(i=1;i<=n;i++){
        printf("\n Enter %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("\n Enter elements to search:");
    scanf("%d",&key);
    for(i=1;i<=n;i++){
        if(key==arr[i]){
            loc=i;
            break;
        }
    }

    if(loc==0){
        printf("%d is Not found",key);
    }
    else{
        printf("%d is found on %d",key,loc);
    }
}