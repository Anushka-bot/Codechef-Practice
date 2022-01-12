#include <stdio.h>
int main()
{
    int T=0;
    scanf("%d",&T);
    int i=0,j=0;
    for(i=0;i<T;i++)
    {
        int n=0,p=0,sum=0;
        scanf("%d",&n);
        for(j=0;n>9;j++)
        {
            p = n % 10;
            n = n / 10;
            sum = sum + p;
        }
        sum = sum + n;
        printf("%d\n",sum);
    }
    return 0;
}