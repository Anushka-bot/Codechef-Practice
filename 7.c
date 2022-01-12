#include <stdio.h>
int main()
{
    int T = 0, i = 0, j = 0, count = 0;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        int N, K;
        scanf("%d  %d", &N, &K);
        char S[N];
        scanf("%s", &S);
        for (j = 0; j < N; j++)
        {
            if (S[j] == '*')
            {
                count++;
            }
            if (count < K && S[j] != '*')
            {
                count = 0;
            }
            if (count == K)
            {
                break;
            }
        }
        if (count == K || count > K)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}