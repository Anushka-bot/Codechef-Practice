#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int total = x + 2 * y;
        if (total % 2 != 0 || x == 0 && y > 0 && y % 2 != 0 || x%2 != 0 )
        {
            cout << "NO" << endl;
        }
        else
        {
           cout << "YES" << endl;
        }
    }
}