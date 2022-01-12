#include <stdio.h>
#include <math.h>
int func();
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int k = 0, x = 0, sum = 0;
        scanf("%d", &k);
        for (x = 1; x <= (2*k); x++)
        {
           int z = func(k+(x*x),k+((x+1)*(x+1)));
            sum = sum + z;
        }
        printf("%d\n", sum);
    }
    return 0;
}
int func(int b1, int b2)
{
    if(b1 == 0)
    {
        return b2;
    }
    return func(b2 % b1, b1);
}