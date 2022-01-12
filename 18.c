#include <stdio.h>
int main()
{
    int t = 0;
    scanf("%d", &t);
    int i = 0;
    for (i = 0; i < t; i++)
    {
        int n = 0;
        scanf("%d", &n);
        int rev = 0, j = 0;
        for (j = 0; n>0; j++)
        {
            if (n > 0)
            {
                rev = (rev * 10) + (n % 10);
                n = n / 10;
            }
        }
        printf("%d\n", rev);
    }
    return 0;
}