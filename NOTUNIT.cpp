#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (b < a + 2)
        {
            cout << -1 << endl;
        }
        else if (__gcd(a, a + 2) != 1 && a + 2 <= b)
        {
            cout << a << " " << a + 2 << endl;
        }
        else if (__gcd(a, a + 2) == 1 && a + 3 <= b)
        {
            cout << a + 1 << " " << a + 3 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}