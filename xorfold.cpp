#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n = 0, m = 0, count = 0;
        cin >> n >> m;
        string s;
        for (int j = 0; j < n; j++)
        {
            cin >> s;
            for (int y = 0; y < m; y++)
            {
               if (s[y] == '1')
                {
                    count++;
                }
            }
        }
        if (count % 2 == 0)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}