#include <stdio.h>
int main()
{
    long int N, x, k;
    int T;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d", &N, &x, &k);
        if (x % k == 0 || (N + 1 - x) % k == 0)
        {
            printf("yes\n");
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}
