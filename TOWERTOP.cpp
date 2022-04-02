#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x, m, curr_height = 0, oprs = 0, towers = 0, bricks_avail = 1, bricks_required = 0;
        cin >> x >> m;
        bricks_required = x;
        while (oprs < m)
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
                curr_height = 0;
                bricks_avail = (bricks_avail - bricks_required) + x;
                bricks_required = x;
            }
            oprs++;
        }
        cout << towers << endl;
    }
}