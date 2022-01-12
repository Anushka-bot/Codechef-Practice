#include <stdio.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++)
    {
        int n=0;
        long long int a=0,b=0;
        long long int sum1=0,sum2=0;
        scanf("%d %d %d",&n,&a,&b);
        int j=0;
        for(j=0;j<n;j++)
        {
            char s[99];
            scanf("%s",&s);
            if(s[0] == 'E' || s[0] == 'Q' || s[0] == 'U' || s[0] == 'I' || s[0] == 'N' || s[0] == 'O' || s[0] == 'X' )
            {
                sum1 = sum1 + a;
            }
            else    
            {
                sum2 = sum2 + b;
            }
        }
        if(sum1 > sum2)
        {
            printf("SARTHAK\n");
        }
        if(sum2 > sum1)
        {
            printf("ANURADHA\n");
        }
        if(sum1 == sum2)
        {
            printf("DRAW\n");
        }
    }
    return 0;
}