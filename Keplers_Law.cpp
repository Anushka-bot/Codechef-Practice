#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int t1, t2, r1, r2;
        cin >> t1 >> t2 >> r1 >> r2;
        double x = ((double)(t1 * t1)) / (r1 * r1 * r1), y = ((double)(t2 * t2)) / (r2 * r2 * r2);
        if (x == y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}