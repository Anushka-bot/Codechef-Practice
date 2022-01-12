#include <stdio.h>
#include <math.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int a = 0, b = 0, c = 0, d = 0, k = 0, x = 0, sum = 0, j = 0;
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &k);
        int m1 = c - a;
        int m2 = d - b;
        if (m1 < 0)
        {
            m1 = m1 * (-1);
        }
        if (m2 < 0)
        {
            m2 = m2 * (-1);
        }
        sum = m1 + m2;
        if (k == sum)
        {
            x = 1;
        }
        for (j = 1; sum <= 2 * pow(10, 5); j++)
        {
            sum = sum + 2;
            if (k == sum)
            {
                x = 2;
            }
        }
        if (x == 1 || x == 2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}