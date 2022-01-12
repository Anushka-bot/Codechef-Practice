#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, m = 0, a = 0, b = 0, v = 0, train = 0, u = 0, reach = 0;
        scanf("%d %d", &n, &m);
        int A[n], B[m];
        for (a = 0; a < n; a++)
        {
            scanf("%d", &A[a]);
        }
        for (b = 0; b < m; b++)
        {
            scanf("%d", &B[b]);
        }
        for (v = 0; v < m; v++)
        {
            train = B[v] - 1;
            if (A[train] == 1 || A[train] == 2)
            {
                printf("0 ");
                reach = 1;
            }
            else
            {
                for (u = 1; u <= n; u++)
                {
                    if (((train - u) >= 0 && A[train - u] == 1) || ((train + u) < n && A[train + u] == 2))
                    {
                        printf("%d ", u);
                        reach = 1;
                        break;
                    }
                } 
            }
            if (reach == 0)
            {
                printf("-1 ");
            }
        }

        printf("\n");
    }
    return 0;
}