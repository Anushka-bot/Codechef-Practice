#include <stdio.h>
int min(int x, int y)
{
    int c = x < y ? x : y;
    return c;
}
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, m = 0, a = 0, d = 0;
        scanf("%d %d", &n, &m);
        int A[n], B[m];
        for (a = 0; a < n; a++)
        {
            scanf("%d", &A[a]);
        }
        for (d = 0; d < m; d++)
        {
            scanf("%d", &B[d]);
        }
        int one[n], two[n];
        int station = 0, first_index = 0, second_index = 0, p = 0, non = 0;
        for (station = 0; station < n; station++)
        {
            if (A[station] == 1)
            {
                first_index = station;
                one[first_index] == 0;
                non++;
                break;
            }
        }
        for (p = 0; p < n; p++)
        {
            if (p == 0)
            {
                one[p] = 0;
            }
            else if (p < first_index && p > 0)
            {
                one[p] = -1;
            }
            else if (p > first_index)
            {
                if (A[p] != 1)
                {
                    one[p] = p - first_index;
                }
                else
                {
                    one[p] = 0;
                    first_index = p;
                }
            }
        }
        int station_2 = 0, r = 0;
        for (station_2 = n - 1; station_2 >= 0; station_2--)
        {
            if (A[station_2] == 2)
            {
                second_index = station_2;
                two[second_index] == 0;
                non++;
                break;
            }
        }
        for (r = n - 1; r >= 0; r--)
        {
            if (r == 0)
            {
                two[r] = 0;
            }
            else if (r > second_index && r < n)
            {
                two[r] = -1;
            }
            else if (r < second_index)
            {
                if (A[r] != 2)
                {
                    two[r] = second_index - r;
                }
                else
                {
                    two[r] = 0;
                    second_index = r;
                }
            }
        }
        int pgers = 0, train = 0;
        for (pgers = 0; pgers < m; pgers++)
        {
            train = B[pgers] - 1;
            if (train == 0)
            {
                printf("0 ");
            }
            else if (non == 0)
            {
                printf("-1 ");
            }
            else
            {
                if (one[train] == -1 && two[train] == -1)
                {
                    printf("-1 ");
                }
                else if (one[train] == -1)
                {
                    printf("%d ", two[train]);
                }
                else if (two[train] == -1)
                {
                    printf("%d ", one[train]);
                }
                else if (one[train] != -1 && two[train] != -1)
                {
                    int u = min(one[train], two[train]);
                    printf("%d ", u);
                }
            }
        }
        printf("\n");
    }
    return 0;
}