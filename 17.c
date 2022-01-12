#include <stdio.h>
int main()
{
    int T=0;
    scanf("%d",&T);
    int i=0,j=0;
    for(i=0;i<T;i++)
    {
        int n=0,p=0,count=0;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            p = n % 10;
            if(p == 4 && n > 9)
            {
                count++;
            }
            n = n / 10;
            if(n == 4)
            {
                count++;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}