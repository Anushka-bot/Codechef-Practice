#include <stdio.h>
int main()
{
    int n=0,k=0,i=0,j=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(k % arr[i] == 0)
        {
            x[j] = k / arr[i];
            j++;
        }
        if(i == n-1)
        {
            x[j] = 101;
        }
    }
    int min = x[0];
    for(int m=1;m<=n;m++)
    {
        if(x[m] == 101)
        {
            break;
        }
        if(x[m] < min)
        {
            min = x[m];
        }
    }
    printf("%d",min);
    return 0;
}