#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        if (x != a && y != b && y != a && x != b)
        {
            cout << 2 << endl;
        }
        else if (((x == a || x == b) && (y != b && y != a)) || ((x != a && x != b) && (y == b || y == a)))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}