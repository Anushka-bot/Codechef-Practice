#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> len;
        while (n--)
        {
            int x;
            cin >> x;
            len.push_back(x);
        }
        unordered_map<int, int> mymap;
        for (auto it : len)
        {
            mymap[it]++;
        }
        for (auto it : len)
        {
            mymap[it] = mymap[it]%4;
        }
        int sticks = 0;
        for (int i = 0; i < n; i++)
        {
            if (mymap[len[i]] % 2 == 0)
            {
                if (mymap[len[i]] % 4 != 0)
                {
                    sticks += 2;
                }
            }
            else
            {
                if (mymap[len[i]] + 1 % 4 == 0)
                {
                    sticks++;
                }
                else
                {

                }
            }
        }
    }
}