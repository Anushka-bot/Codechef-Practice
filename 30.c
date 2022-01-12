#include <stdio.h>
int count_pair();
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, m = 0, a = 1, b = 2, count = 0;
        scanf("%d %d", &n, &m);
        int c = count_pair(a, b, m, n, count);
        printf("%d\n", c);
    }
    return 0;
}
int count_pair(int a, int b, int m, int n, int count)
{
    if (a == n)
    {
        return count;
    }
    if (b > a && b <= n)
    {
        if (((m % a) % b) == ((m % b) % a))
        {
            count++;
        }
        if ((b+1) > n && a < n)
        {
            return count_pair(a+1, a+2, m, n, count);
        }
        if ((b+1) <= n)
        {
            return count_pair(a, b+1, m, n, count);
        }
    }
}