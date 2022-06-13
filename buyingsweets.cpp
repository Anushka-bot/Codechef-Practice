#include <bits/stdc++.h>
using namespace std;

// int maxsweets(vector<int> price, vector<int> cashback, int r, int n)
// {
//     int t[r + 1][n + 1];
//     for (int i = 0; i <= r; i++)
//     {
//         for (int j = 0; j <= n; j++)
//         {
//             if (i == 0 || j == 0)
//             {
//                 t[i][j] = 0;
//             }
//         }
//     }
//     for (int i = 1; i <= r; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (r > 0)
//             {
//                 t[i][j] = max(1 + t[i][j - price[i] + cashback[i]], t[i - 1][j]);
//             }
//         }
//     }
//     return t[r][n];
// }

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        vector<int> price(n), cashback(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            price[i] = x;
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cashback[i] = x;
        }
        
    }
}