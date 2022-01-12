#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int string_size = s.size();
        if (s.find("11") != -1)
        {
            cout << "Yes" << endl;
        }
        else if (s.find("10") != -1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}