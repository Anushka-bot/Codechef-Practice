#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, ones = 0, zeros = 0;
        cin >> n;
        string s;
        cin >> s;
        for (auto it : s)
        {
            if (it == '1')
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        if (ones > zeros)
        {
            if (ones - zeros == 1)
            {
                cout << n << endl;
            }
            else
            {
                cout << (2 * zeros) + 1 << endl;
            }
        }
        else if (ones < zeros)
        {
            if (zeros - ones == 1)
            {
                cout << n << endl;
            }
            else
            {
                cout << (2 * ones) + 1 << endl;
            }
        }
        else
        {
            cout << n << endl;
        }
    }
}