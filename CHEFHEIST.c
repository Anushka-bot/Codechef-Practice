#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int D = 0, d = 0, p = 0, q = 0, sum = 0;;
        scanf("%d %d %d %d", D, d, p, q);
        sum = (D / 2) * (D - 1);
        printf("%d\n", (sum*q) + (D * p));
    }
    return 0;
}