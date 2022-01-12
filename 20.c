#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 0, y=0,v=0;
    int s[n];
    for (i = 0; i < n; i++)
    {
        int a = 0, b = 0;
        scanf("%d %d", &a, &b);
        y = y + a;
        v = v +b;
        s[i] = y - v;
    }
    int max = 0;
    max = s[0];
    if (max < 0)
    {
        max = (-1) * max;
    }
    int j = 0, x = 0;
    for (j = 1; j < n; j++)
    {
        if (s[j] < 0)
        {
            if (((-1) * (s[j])) > max)
            {
                max = ((-1) * s[j]);
                x = j;
            }
        }
        else
        {
            if (s[j] > max)
            {
                max = s[j];
                x = j;
            }
        }
    }
    if (s[x] > 0)
    {
        printf("1 %d", max);
    }
    else
    {
        printf("2 %d", max);
    }
    return 0;
}
