#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w + (y * z) == x)
        {
            cout << "filled" << endl;
        }
        else if (w + (y * z) < x)
        {
            cout << "unfilled" << endl;
        }
        else
        {
            cout << "overflow" << endl;
        }
    }
}