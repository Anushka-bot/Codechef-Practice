#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, a = 0, b = 0, dis = 0, state = 0;
        cin >> n >> a >> b;
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                state++;
            }
            else
            {
                dis++;
            }
        }
        int total_time = state * b + dis * a;
        cout << total_time << endl;
    }
}