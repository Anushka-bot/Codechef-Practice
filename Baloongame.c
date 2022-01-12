#include <stdio.h>
int main()
{
    int n=0,k=0,i=0,j=0;
    scanf("%d %d",&n,&k);
    int c[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&c[i]);
    }
    for(j=1;j<=n;j++)
    {
        int x = (j*(j+1))/2;
        if(k < x || k == x)
        {
            
        }
    }
    return 0;
}