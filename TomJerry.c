#include <stdio.h>
#include <math.h>
void insertionSort();
int main()
{
    int t = 0, i = 0;
    scanf("%d", &t);
    for (i = 0; i < t; i++)
    {
        int n = 0, k = 0, j = 0, m = 0, l = 1;
        long int chef1 = 0, chef2 = 0;
        scanf("%d %d", &n, &k);
        int a[n];
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[j]);
        }
        insertionSort(a, n);
        for (m = 0; l <= k; m = m + 2,l++)
        {
            if (l == k)
            {
                chef1 = chef1 + a[m];
                chef2 = chef2 + a[m + 1] + a[m + 2];
            }
            else
            {
                chef1 = chef1 + a[m];
                chef2 = chef2 + a[m + 1];
            }
        }
        if (chef1 > chef2)
        {
            printf("%ld\n", chef1);
        }
        else
        {
            printf("%ld\n", chef2);
        }
    }
    return 0;
}
void insertionSort(int a[], int n)
{
    int a1, key, b;
    for (a1 = 1; a1 < n; a1++)
    {
        key = a[a1];
        b = a1 - 1;
        while (b >= 0 && a[b] < key)
        {
            a[b + 1] = a[b];
            b = b - 1;
        }
        a[b + 1] = key;
    }
}
