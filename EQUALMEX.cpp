#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, maxi = INT_MIN, not_present = 0, v = 0;
        unordered_map<int, int> mymap;
        cin >> n;
        int num = 2 * n;
        while (num--)
        {
            int x;
            cin >> x;
            mymap[x]++;
            maxi = max(maxi, x);
        }
        for (int i = 0; i < maxi; i++)
        {
            if (mymap.find(i) == mymap.end())
            {
                not_present++;
                break;
            }
        }
        if (not_present > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            for (auto it : mymap)
            {
                if (it.second == 1)
                {
                    v = 1;
                    cout << "NO" << endl;
                }
            }
            if (v == 0)
            {
                cout << "YES" << endl;
            }
        }
    }
}