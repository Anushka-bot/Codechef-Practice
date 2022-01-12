#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, m = 0, i = 0, j = 0, p = 0, a = 0, side = 0;
    cin >> n >> m;
    char arr[n][m];
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x = 0, y = 0;
    for (p = 1; p <= n; p++)
    {
        for (a = 1; a <= m; a++)
        {
            if (arr[p][a] == 'B')
            {
                side++;
            }
            if (side == 1 and x == 0 and y == 0)
            {
                x = p;
                y = a;
                cout << x << y << endl;
            }
            if (side != 0 && arr[p][a] == 'W')
            {
                break;
                i = n + 2;
            }
        }
        if (i == n + 2)
        {
            break;
        }
    }
    int midx = (x + side + x) / 2;
    int midy = (y + side + y) / 2;
    cout << midx << " " << midy << endl;
    return 0;
}