#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, count = 0, k = 0;
        vector<int> v;
        cin >> n;
        string s;
        cin >> s;
        for (k = 0; k < n; k++)
        {
            if (s[k] == '1')
            {
                break;
            }
        }
        if (k == n)
        {
            count = 0;
        }
        else
        {
            while (1)
            {
                count++;
                for (int i = 0; i < n; i++)
                {
                    if (s[i] == '1')
                    {
                        if (v.size() == 0)
                        {
                            v.push_back(i);
                        }
                        else if (abs(v[v.size() - 1] - i) != 1)
                        {
                            v.push_back(i);
                        }
                    }
                }
                for (auto it : v)
                {
                    s[it] = 0;
                }
                v.clear();
                int i = 0;
                for (i = 0; i < n; i++)
                {
                    if (s[i] == '1')
                    {
                        break;
                    }
                }
                if (i == n)
                {
                    break;
                }
            }
        }
        cout << count << endl;
    }
}