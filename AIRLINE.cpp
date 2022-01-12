#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0, d = 0, e = 0;
        cin >> a >> b >> c >> d >> e;
        if (a + b <= d && c <= e || a + c <= d && b <= e || b + c <= d && a <= e)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}