#include <stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++)
    {
        int m=0,s=0;
        scanf("%d %d",&m,&s);
        int b=0;
        b = m / s;
        printf("%d\n",b);
    }
    return 0;
}