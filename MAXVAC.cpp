#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        string s;
        cin >> s;
        vector<int> holidayssuffix(n + 1), nextpos1(n + 1);
        int cnt0 = 0, vac = 0, pos1 = n;
        for (int i = n - 1; i >= 0; i--)
        {
            nextpos1[i] = pos1;
            if (s[i] == '1')
            {
                pos1 = i;
                cnt0 = 0;
            }
            else
            {
                cnt0++;
                if (cnt0 == x)
                {
                    vac++;
                    cnt0 = 0;
                }
            }
            holidayssuffix[i] = vac;
        }
        int ans = holidayssuffix[0];
        cnt0 = 0, vac = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
                if (cnt0 == x)
                {
                    vac++;
                    cnt0 = 0;
                }
            }
            else
            {
                if (nextpos1[i] > i + x - 1 - cnt0)
                {
                    ans = max(ans, 1 + vac + holidayssuffix[i + x - cnt0]);
                }
            }
            cnt0 = 0;
        }
        cout << ans << endl;
    }
}

//https://www.codechef.com/START23C/problems/MAXVAC
//APPROACH->PRE-PROCESSING [AKA: DYNAMIC PROGRAMMING]