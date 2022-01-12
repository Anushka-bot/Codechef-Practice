#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    int n, sum, p;
    while (T > 0)
    {
        scanf("%d", &n);
        while (n != 0)
        {
            p = n % 10;
            sum = sum + p;
            n = n / 10;
        }
        printf("%d\n", sum);
        T--;
    }
    return 0;
}