#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, p = 0, k = 0;
        cin >> n >> p >> k;
        int days = 0, v = 0;
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % k == i)
                {
                    if (j == p)
                    {
                        days++;
                        v = 1;
                        break;
                    }
                    days++;
                }
            }
            if (v == 1)
            {
                break;
            }
        }
        cout << days << endl;
    }
}