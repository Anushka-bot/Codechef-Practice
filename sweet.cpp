#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        vector<int> price, cashback, net(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            price.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cashback.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            net[i] = price[i] - cashback[i];
        }
        multimap<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m.insert({net[i], price[i]});
        }
        int sweets = 0;
        for (auto it = m.begin(); it != m.end();)
        {
            if (it->second <= r)
            {
                sweets++;
                r = r - (it->first);
                if (r <= 0)
                {
                    break;
                }
            }
            else
            {
                it++;
            }
        }
        cout << sweets << endl;
    }
}