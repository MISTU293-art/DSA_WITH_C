#include <stdio.h>
#define MAX 150
char stack[MAX];
int top=-1;
int main()
{
    char val[MAX];
    char A,B;
    int i;
    printf("\n Enter The Infix Expression:");
    scanf("%s", val);

    while (val[i] != NULL)
    {
        if (val[i] != '+' || val[i] != '/' || val[i] != '*' || val[i] != '-'){
            top=top+1;
            stack[top]=val[i];
        }else{
            A=val[i];
            top--;
            B=val[i];
            top--;
            A=(AB) val[i];

        }
    }
}
