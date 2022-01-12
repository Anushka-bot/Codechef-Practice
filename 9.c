#include <stdio.h>
int main()
{
    int T = 0;
    scanf("%d", &T);
    int o = 0;
    for (o = 0; o < T; o++)
    {
        int N = 0;
        scanf("%d",&N);
        int A[N],B[N],u = 0, k = 0;
        for (u = 0; u < N; u++)
        {
            scanf("%d", &A[u]);
        }
        for (k = 0; k < N; k++)
        {
            scanf("%d", &B[k]);
        }
        int p = 0;
        int L_V[N];
        for (p = 0; p < N; p++)
        {
            L_V[p] = A[p] + B[p];
        }
        int i = 0, j = 0;
        for (i = 0; i < N - 1; i++)
        {
            for (j = 1; j < N; j++)
            {
                if (L_V[i] < L_V[j])
                {
                    break;
                }
            }
            if (j == N)
            {
                break;
            }
        }
    }
    return 0;
}