#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        int a1 = 0, b1 = 0;
        cin >> a >> b >> c >> d;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        sort(v.begin(), v.end());
        if (v[0] < 0)
        {
            a1 = (v[0] + v[2]) / 2;
            b1 = (v[2] - v[0]) / 2;
            if (a1 * b1 == v[3] && a1 / b1 == v[1])
            {
                cout << a1 << " " << b1 << endl;
            }
            else
            {
                a1 = (v[0] + v[3]) / 2;
                b1 = (v[3] - v[0]) / 2;
                if (a1 * b1 == v[2] && a1 / b1 == v[1])
                {
                    cout << a1 << " " << b1 << endl;
                }
                else
                {
                    cout << -1 << " " << -1 << endl;
                }
            }
        }
        else
        {
            a1 = (v[1] + v[2]) / 2;
            b1 = (v[2] - v[1]) / 2;
            if (a1 * b1 == v[3] && a1 / b1 == v[0])
            {
                cout << a1 << " " << b1 << endl;
            }
            else
            {
                a1 = (v[1] + v[3]) / 2;
                b1 = (v[3] - v[1]) / 2;
                if (a1 * b1 == v[2] && a1 / b1 == v[0])
                {
                    cout << a1 << " " << b1 << endl;
                }

                else
                {
                    cout << -1 << " " << -1 << endl;
                }
            }
        }
    }
}