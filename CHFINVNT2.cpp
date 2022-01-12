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
        int remainders = (n - 1) % k;
        int rem_0 = (n - 1) / k;
        int rem_p = p % k;
        int rem_0_numP = p / k;
        int total_days = 0;
        if (rem_p + k < n)
        {
            total_days = rem_p + 1 + (rem_0 * remainders) + (rem_p - remainders) * (rem_0 - 1);
            printf("%d*\n", total_days);
        }
        else if (rem_p < remainders)
        {
            total_days = rem_p + 1 + (rem_0 * rem_p);
            printf("%d***\n", total_days);
        }
        else
        {
            total_days = rem_p + 1 + (rem_0 * remainders);
            printf("%d**\n", total_days);
        }
        int total_days_with_rem_p_upto_numN = 0;
        if ((rem_0 * k) + rem_p <= n - 1)
        {
            total_days_with_rem_p_upto_numN = rem_0 + 1;
        }
        else
        {
            total_days_with_rem_p_upto_numN = rem_0;
        }
        int total_days_with_rem_p_upto_numP = 0;
        if ((rem_0_numP * k) + rem_p <= p)
        {
            total_days_with_rem_p_upto_numP = rem_0_numP + 1;
        }
        else
        {
            total_days_with_rem_p_upto_numP = rem_0_numP;
        }
        int t = total_days_with_rem_p_upto_numN - total_days_with_rem_p_upto_numP;
        int ans = total_days - t;
        cout << ans << endl;
    }
}