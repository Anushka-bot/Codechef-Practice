#include <stdio.h>
int main()
{
    int A=0,B=0,C=0;
    scanf("%d %d %d",&A,&B,&C);
    if(A == B || B == C || C == A)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}