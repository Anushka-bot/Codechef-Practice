#include <stdio.h>
#include <math.h>
int main()
{
    int t=0;
    scanf("%d",&t);
    int i=0;
    for(i=0;i<t;i++)
    {
        int n=0;
        scanf("%d",&n);
        int b = sqrt(n);
        printf("%d\n",b);
    }
    return 0;
}