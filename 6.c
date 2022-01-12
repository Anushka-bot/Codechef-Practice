#include <stdio.h>
int main()
{
    int T = 0, i = 0;
    float k1, k2, k3, v;
    scanf("%d", &T);
    for (i = 0; i < T; i++)
    {
        scanf("%f %f %f %f", &k1, &k2, &k3, &v);
        float v1;
        v1 = (k1*k2*k3*v);
        if ((100 / v1) < 9.58)
        {
            printf("yes");
        }
        else
        {
            printf("No");
        }
    }

    return 0;
}