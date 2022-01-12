#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int i = 0;
    for (i = 0; i < t; i++)
    {
        int l = 0;
        scanf("%d", &l);
        char s[l];
        scanf("%s", &s);
        double b = 0;
        b = (l / 2.0);
        int j = 0, count = 0;
        int x = 0;
        for (j = 0; j < l; j++)
        {
            if (s[j] == 1)
            {
                count++;
            }
            double c = 0;
            c = (j + 1) / (2.0);
            if (count == c || count > c)
            {
                printf("YES\n");
                x = 1;
                break;
            }
        }
        if ((count == b || count > b) && (x == 0))
        {
            printf("YES\n");
        }
        if ((count < b) && (x == 0))
        {
            printf("NO\n");
        }
    }
    return 0;
}