#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n = 0, l = 0, r = 0, a = 0, b = 0, sum = 0, j = 0;
        long int pairs = 0;
        cin >> n >> l >> r;
        int arr[n];
        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (a = 0; a < n - 1; a++)
        {
            for (b = 1; b < n; b++)
            {
                if (b > a)
                {
                    sum = arr[a] + arr[b];
                    if ((sum > l || sum == l) && (sum < r || sum == r))
                    {
                        pairs++;
                    }
                }
            }
        }
        cout << pairs << endl;
    }
    return 0;
}