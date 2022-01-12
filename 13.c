#include <stdio.h>
int main()
{
    int T = 0;
    scanf("%d", &T);
    int i = 0;
    for (i = 0; i < T; i++)
    {
        int a = 0, b = 0, c = 0;
        scanf("%d %d", &a, &b);
        c = a % b;
        if (a < b)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", c);
        }
    }
    return 0;
}