#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, maxi = INT_MIN, mex = -1, flag = 0;
        cin >> n;
        vector<int> v;
        unordered_map<int, int> my;
        for (int i = 0; i < (2 * n); i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            my[x]++;
            maxi = max(maxi, x);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < maxi; i++)
        {
            if (my.find(i) == my.end())
            {
                mex = i;
                break;
            }
        }
        if (mex == -1)
        {
            mex = maxi + 1;
        }
        for (int i = 0; i < mex; i++)
        {
            if (my[i] > 1)
            {
                continue;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}