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
        int rem_p = p % k;
        int rem_0 = (n - 1) / k;
        int remaining = (n - 1) % k;
        int days_except_remp = 0;
        if (rem_p - 1 <= remaining)
        {
            days_except_remp = (rem_p * rem_0) + (rem_p - 1);
        }
        else
        {
            days_except_remp = (rem_p * rem_0) + remaining;
        }
        int rem_0_p = p / k;
        int days = rem_0_p + 1 + 1;
        int ans = days + days_except_remp;
        cout << ans << endl;
    }
}