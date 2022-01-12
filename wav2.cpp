#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, q = 0, check = 0, positive = 0, negative = 0, v = 0;
    cin >> n >> q;
    int roots[n];
    for (int i = 0; i < n; i++)
    {
        cin >> roots[i];
    }
    for (int i = 0; i < q; i++)
    {
        cin >> check;
        positive = 0, negative = 0;
        for (int i = 0; i < n; i++)
        {
            if (check == roots[i])
            {
                printf("0\n");
                v = 1;
                continue;
            }
            else if (check > 0)
            {
                if (check > roots[i])
                {
                    positive++;
                }
            }
            else if (check < 0)
            {
                if (roots[i] > 0)
                {
                    negative++;
                }
                else if (roots[i] < 0)
                {
                    if (check + roots[i] < 0)
                    {
                        negative++;
                    }
                }
            }
        }
        if ((n % 2 != 0 && positive % 2 == 0 && positive != 0) || (n % 2 == 0 && positive % 2 != 0 && positive != 0) || (negative % 2 != 0 && negative != 0))
        {
            if (v != 1)
            {
                printf("NEGATIVE\n");
            }
        }
        else
        {
            if (v != 1)
            {
                printf("POSITIVE\n");
            }
        }
    }
    return 0;
}