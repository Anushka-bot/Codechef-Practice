#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int g = 0, k = 1, j = 0, x = 0, count = 0;
        scanf("%d", &g);
        for (k = 1; k <= g; k++)
        {
            int sum = 0;
            for (j = 0; j <= g; j++)
            {
                sum = sum + k + j;
                if (sum == g)
                {
                    x = 1;
                    break;
                }
                else if (sum > g)
                {
                    x = 2;
                    break;
                }
            }
            if (x == 1)
            {
                count++;
            }
        }
        printf("Case #%d: %d\n",i+1, count);
    }
    return 0;
}