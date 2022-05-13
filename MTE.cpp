#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, opr = 0;
        cin >> n;
        vector<int> e, o;
        while (n--)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                e.push_back(x);
            }
            else
            {
                o.push_back(x);
            }
        }
        if (o.size() % 2 == 0)
        {
            if (e.size() < (o.size())/2)
            {
                opr = e.size();
            }
            else
            {
                opr = o.size()/2;
            }
        }
        else
        {
            if (e.size() <= o.size())
            {
                opr = e.size();
            }
            else
            {
                opr = min(e.size(),((o.size()-1)/2)+e.size());
            }
        }
        cout << opr << endl;
    }
}