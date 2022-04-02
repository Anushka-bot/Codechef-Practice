#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        long long int count = 1, ans = 0, equals = 0;
        cin >> n;
        vector<int> v, c;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for (auto it : v)
        {

            int x = (int)(log2(it));
            c.push_back(x + 1);
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (c[i] == c[i + 1])
            {
                count++;
            }
            else
            {
                ans += (count * (count - 1)) / 2;
                count = 1;
            }
        }
        ans += (count * (count - 1)) / 2;
        cout << ans << endl;
    }
}