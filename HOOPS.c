#include <stdio.h>
int main()
{
    int t=0,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n=0;
        scanf("%d",&n);
        printf("%d\n",(n+1)/2);
    }
    return 0;
}