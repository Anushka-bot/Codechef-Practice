#include <stdio.h>
#include <math.h>
#define mod 1000000007;
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n=0;
        scanf("%d",&n);
        long long int count = 0;
        count = (pow(2, n) / 2) + 1;
        count = count % mod;
        printf("%d\n", count);
    }
}