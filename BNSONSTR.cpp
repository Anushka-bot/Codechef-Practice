#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n = 0, j = 0, count = 0, v = 0, sum = 0, temp = 0, max = 0, count1 = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == '1' && (j + 1) % 2 != 0 && n % 2 == 0)
            {
                count1++;
            }

            if (s[j] == '1')
            {
                count++;
            }
            if ((count != 0 && s[j] == '0') || (count != 0 && j == n - 1))
            {
                temp = count;
                sum = sum + temp;
                if (temp > max && max != 0)
                {
                    max = temp;
                }
                v++;
                count = 0;
            }
            if (v == 1)
            {
                max = temp;
            }
        }
        if (count1 == n / 2)
        {
            printf("0\n");
            continue;
        }
        if (v == 0)
        {
            printf("1\n");
            continue;
        }
        printf("%d\n", sum - max);
    }
    return 0;
}