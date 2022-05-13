#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, a, b, cards = 0;
        cin >> n >> a >> b;
        if (a > b)
        {
            if (a - b == 1)
            {
                if (a + 1 <= n)
                {
                    cards++;
                }
                if (b - 1 <= n && b - 1 > 0)
                {
                    cards++;
                }
                cout << cards << endl;
            }
            else if (a - b == 2)
            {
                cout << 1 << endl;
            }
            else if (a - b > 2)
            {
                cout << 0 << endl;
            }
        }
        else if (a == b)
        {
            cout << 0 << endl;
        }
        else
        {
            if (b - a == 1)
            {
                if (b + 1 <= n)
                {
                    cards++;
                }
                if (a - 1 <= n && a - 1 > 0)
                {
                    cards++;
                }
                cout << cards << endl;
            }
            else if (b - a == 2)
            {
                cout << 1 << endl;
            }
            else if (b - a > 1)
            {
                cout << 0 << endl;
            }
        }
    }
}