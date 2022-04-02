#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, flag = 7, ans = 1;
        cin >> n;
        if (n < 3)
        {
            cout << 0 << endl;
        }
        else if (n == 3)
        {
            cout << 1 << endl;
        }
        else
        {
            while (true)
            {
                if (n > flag)
                {
                    int last_flag = (flag - 1) / 2;
                    ans += (flag - last_flag - 1);
                    flag = (flag * 2) + 1;
                }
                else if (n == flag)
                {
                    int last_flag = (flag - 1) / 2;
                    cout << (flag - last_flag - 1) + ans << endl;
                    break;
                }
                else
                {
                    int last_flag = (flag-1)/2;
                    ans += n-(last_flag+1);
                    cout << ans << endl;
                    break;
                }
            }
        }
    }
}