#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, pairs = 0, incorr_zeros = 0, odd_avail_ones = 0, even_avail_ones = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<int> pos_zeros;
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1 && s[i] == '0' && s[i + 1] == '1')
            {
                pairs++;
            }
            if ((i != n-1 && i % 2 == 0 && s[i] == '1' && s[i - 1] != '0' && s[i+1]=='1' ) || (i == 0 && s[i] == '1'))
            {
                odd_avail_ones++;
            }
            if ((i != n-1 && i % 2 != 0 && s[i] == '1' && s[i - 1] != '0' && s[i+1]=='1'))
            {
                even_avail_ones++;
            }
            if (i != n - 1 && s[i] == '0' && s[i + 1] == '0' || (i == n - 1 && s[i] == '0'))
            {
                pos_zeros.push_back(i+1);
                incorr_zeros++;
            }
        }
        if (incorr_zeros == 0)
        {
            cout << pairs << endl;
        }
        else
        {
            for (int i = 0; i < incorr_zeros; i++)
            {
                if (pos_zeros[i] % 2 == 0)
                {
                    if (even_avail_ones > 0)
                    {
                        pairs++;
                        even_avail_ones--;
                    }
                }
                else
                {
                    if (odd_avail_ones > 0)
                    {
                        pairs++;
                        odd_avail_ones--;
                    }
                }
            }
        }
        cout << pairs << endl;
    }
}