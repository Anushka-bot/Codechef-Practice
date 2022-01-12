#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, m;
        scanf("%d %d", &n, &m);
        int a[n], b[m];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d", &b[i]);
        }

        int temp1 = -1, temp2 = -1;
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < b[j]; i++)
            {
                if (a[i] == 1)
                {
                    temp1 = i + 1;
                }
            }
            for (int i = n - 1; i > b[j] - 2; i--)
            {
                if (a[i] == 2)
                {
                    temp2 = i + 1;
                }
            }
            if (temp1 == -1 && temp2 == -1)
            {
                printf("-1 ");
            }
            else if (temp1 == -1)
            {
                printf("%d ", temp2 - b[j]);
            }
            else if (temp2 == -1)
            {
                printf("%d ", b[j] - temp1);
            }
            else
            {
                int min = (temp2 - b[j]) < (b[j] - temp1) ? (temp2 - b[j]) : (b[j] - temp1);
                printf("%d ", min);
            }
        }
    }
    return 0;
}