#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        if (x % 5 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            if (x % 10 == 0)
            {
                cout << x / 10 << endl;
            }
            else
            {
                int coins = (x / 10);
                x -= coins * 10;
                coins += x / 5;
                cout << coins << endl;
            }
        }
    }
}