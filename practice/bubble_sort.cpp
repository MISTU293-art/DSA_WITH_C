#include <iostream>
using namespace std;

int main(){
    int arr[100];
    int len,i,j,temp;
    cout<<"\n enter the length:";
    cin>>len;

    cout<<"\n Enter Element:";
    for(i=1;i<=len;i++){
        cout<<"\n Enter "<<i<<":";
        cin>>arr[i];
    }

    for(i=1;i<len;i++){
        for(j=1;j<=i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"Sorted Element:";
    for(i=1;i<=len;i++){
        cout<<arr[i]<<"\n";
    }
}