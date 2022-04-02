#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        long long int x, m, curr_height = 0, oprs = 0, towers = 0, bricks_avail = 1, bricks_required = 0;
        cin >> x >> m;
        bricks_required = x;
        while (towers == 0 && oprs < m)
        {
            if (bricks_required > bricks_avail)
            {
                curr_height += bricks_avail;
                bricks_avail = curr_height;
                bricks_required = x - curr_height;
            }
            else
            {
                towers++;
            }
            oprs++;
        }
        // cout << oprs << endl;
        long long int oprs_left = m - oprs;
        towers += oprs_left;
        cout << towers << endl;
    }
}