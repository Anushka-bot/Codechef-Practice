#include <stdio.h>
int frwrd();
int backwrd();
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, x = 0, k = 0, l = 0;
        scanf("%d %d %d", &n, &x, &k);
        int c = frwrd(n, x, k);
        if (c == 1)
        {
            printf("YES\n");
            l = 1;
        }
        else
        {
            int d = backwrd(n, x, k);
            if (d == 1)
            {
                printf("YES\n");
                l = 1;
            }
        }
        if (l != 1)
        {
            printf("NO\n");
        }
    }
    return 0;
}
int frwrd(int n, int x, int k)
{
    int arr[n + 2];
    int j = 0, m = 0;
    for (j = 0; j < (n + 2); j++)
    {
        if (j * k > x)
        {
            break;
        }
        arr[j] = j * k;
        if (arr[j] == x)
        {
            m = 1;
            return 1;
            break;
        }
    }
    if (m != 1)
    {
        return 0;
    }
}
int backwrd(int n, int x, int k)
{
    int b[n + 2];
    int v = 0, u = 0;
    for (v = 0; v < (n + 2); v++)
    {
        if (((n + 1) - (v * k)) < x)
        {
            break;
        }
        b[v] = (n + 1) - (v * k);
        if (b[v] == x)
        {
            u = 1;
            return 1;
            break;
        }
    }
    if (u != 1)
    {
        return 0;
    }
}