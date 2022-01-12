#include <stdio.h>
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int x1 = 0, x2 = 0, X1 = 0, X2 = 0;
        scanf("%d %d %d %d",&x1,&x2,&X1,&X2);
        int a = X1 / x1;
        int b = X2 / x2;
        printf("%d\n",a+b);
    }
    return 0;
}