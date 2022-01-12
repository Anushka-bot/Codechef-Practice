#include <stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int arr[2];
    int i,j;
    for(j=0;j<T;j++)
    {
        for(i=0;i<1;i++)
        {
            scanf("%d %d",&arr[i],&arr[i+1]);
        }
        int sum = arr[0] + arr[1];
        printf("%d\n",sum);
    }

    return 0;
}