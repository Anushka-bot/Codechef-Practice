#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, x = 0, y = 0, ans = 0, v = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (x = 0; x <= pow(10,4); x++)
        {
            y = (arr[0] + x) ^ (arr[1] + x);
            for (int i = 2; i < n; i++)
            {
                y = y ^ (arr[i] + x);
            }
            if (y == 0)
            {
                ans = x;
                v = 1;
                break;
            }
        }
        if (v == 1)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}