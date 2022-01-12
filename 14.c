#include <stdio.h>
int fact(int n);
int fact(int n)
{
    if(n == 1)
    {
        return (1);
    }
    int r=0;
    r = n * fact(n-1);
    return (r);
}
int main()
{
    int t=0;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++)
    {
        int b=0,n=0;
        scanf("%d",&n);
        b = fact(n);
        printf("%d\n",b);
    }
    return 0;
}