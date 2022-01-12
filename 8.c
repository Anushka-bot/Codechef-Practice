#include <stdio.h>
int main()
{
    int T=0;
    scanf("%d", &T);
    int i = 0;
    for (i = 0; i < T; i++)
    {
        int H = 0, x = 0, y = 0, C = 0;
        scanf("%d %d %d %d",&H,&x,&y,&C);
        int s = x+(y/2);
        int p = s * H;
        if(p <= C)
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