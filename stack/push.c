#include <stdio.h>
#define n 4
int arr[n];
int top = -1;
int main()
{
    int i;
    if (top == n - 1)
    {
        printf("\n Stack Overflow");
    }
    else
    {
        printf("\n Enter Element:");
        scanf("%d", &arr[++top]);
    }

    printf("\n Top ELemnets:%d", arr[top]);
}