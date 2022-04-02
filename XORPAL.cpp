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
        if (n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
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
            if ((ones == zeros || ones == 0 || zeros == 0) || (ones % 2 == 0 && zeros % 2 == 0))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}