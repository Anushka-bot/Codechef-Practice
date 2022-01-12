#include <stdio.h>
int main()
{
    int T = 0;
    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        int n = 0, x = 0, k = 0,l=0;
        scanf("%d %d %d", &n, &x, &k);
        if((n+1)%2 == 0 && k%2 == 0 && x%2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
