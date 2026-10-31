#include <stdio.h>
int main(){
    int n,mid,low,high,key,loc=0,arr[100],i,j;
    
    printf("\n enter the length:");
    scanf("%d",&n);

    printf("\n enter the elements:");
    for(i=1;i<=n;i++){
        printf("\n enter %d:",i);
        scanf("%d",&arr[i]);
    }

    printf("\n enter elements to search:");
    scanf("%d",&key);

    low=1;
    high=n;
    while(low<=high){
        mid=(low+high)/2;
        if(key==arr[mid]){
            loc=mid;
            break;
        }
        else if(key<arr[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }

    if(loc==0){
        printf("%d is not found ",key);
    
    }else{
        printf("%d is found on %d",key,loc);
    }
}