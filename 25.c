#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int x = 0, a = 0, b = 0, ans = 0;
        scanf("%d %d %d", &x, &a, &b);
        ans = 10 * (a + (100 - x) * b);
        printf("%d\n", ans);
    }
    return 0;
}