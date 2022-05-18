#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int d, v=0;
        cin >> d;
        string s;
        cin >> s;
        for (auto it : s)
        {
            if (it == '0' || it == '5')
            {
                v=1;
                cout << "YES" << endl;
                break;
            }
        }
        if(v == 0){
            cout << "NO" << endl;
        }
    }
}