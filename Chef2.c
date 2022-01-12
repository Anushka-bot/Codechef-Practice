#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int D = 0, d = 0, p = 0, q = 0;
        scanf("%d %d %d %d", &D, &d, &p, &q);
        if ((D % 2 != 0 && d % 2 == 0) || (D % 2 == 0 && d % 2 != 0) || (D % 2 == 0 && d == 1))
        {
            int j = 0, sum = 0, l = 0;
            for (j = 0; j < D - 1; j = j + d, l++)
            {
                sum = sum + (q * d * l);
            }
            sum = sum + (l * q);
            printf("%d\n", sum + (D * p));
        }
        else
        {
            int j = 0, sum = 0, l = 0;
            for (j = 0; j < D; j = j + d, l++)
            {
                sum = sum + (q * d * l);
            }
            printf("%d\n", sum + (D * p));
        }
    }
    return 0;
}