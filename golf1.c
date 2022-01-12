#include <stdio.h>
int main()
{
    int t=0,i=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n=0,x=0,k=0,j=0,l=0;
        scanf("%d %d %d",&n,&x,&k);
        for(j=0;((j*k) <= (n+1)) && ((n+1)-(j*k)) >= 0;j++)
        {
            if((x == j*k) || (x == ((n+1)-j*k)))
            {
                printf("YES\n");
                l = 1;
                break;
            }
        }
        if(l == 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}