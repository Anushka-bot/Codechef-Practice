#include <stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++)
    {
        int n=0,p=0;
        scanf("%d",&n);
        p = n % 10;
        while(n>9)
        {
            n = n / 10;
        }
        p = p + n;
        printf("%d\n",p);
    }
    return 0;
}