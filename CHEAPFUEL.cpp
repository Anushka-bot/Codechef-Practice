#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x, y, a, b, k;
        cin >> x >> y >> a >> b >> k;
        int ans1 = x + a * k;
        int ans2 = y + b * k;
        if (ans1 < ans2)
        {
            cout << "PETROL" << endl;
        }
        else if (ans1 > ans2)
        {
            cout << "DIESEL" << endl;
        }
        else
        {
            cout << "SAME PRICE" << endl;
        }
    }
}