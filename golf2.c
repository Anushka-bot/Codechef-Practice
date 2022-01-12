#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, x = 0, k = 0, j = 0, l = 0;
        scanf("%d %d %d", &n, &x, &k);
        for (j = 0; j < (k); j++)
        {
            if (((n + 1) % 2 == 0 && k % 2 != 0) || ((n + 1) % 2 != 0 && k % 2 == 0))
            {
                if ((x == j * k) || (x == ((n + 1) - j * k)) || (x == (j * k + 1)) || (x == ((n + 1) - (j * k) - 1)))
                {
                    printf("YES\n");
                    l = 1;
                    break;
                }
            }
            else
            {
                if ((x == j * k) || (x == ((n + 1) - j * k)))
                {
                    printf("YES\n");
                    l = 1;
                    break;
                }   
            }
        }
        if (l == 0)
        {
            printf("NO\n");
        }
    }
    return 0;
}