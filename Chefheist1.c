#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int D = 0, d = 0, p = 0, q = 0;
        long long int sum = 0;
        scanf("%d %d %d %d", &D, &d, &p, &q);
        int x = D % d;
        long long int fullsets = (D - x) / d;
        sum = (fullsets * (fullsets - 1) * q * d) / 2 + D * p + x * q * D/d;
        printf("%lld\n", sum);
    }
    return 0;
}