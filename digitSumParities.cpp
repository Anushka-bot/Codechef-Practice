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
        if (n % 10 != 9)
        {
            cout << n + 1 << endl;
        }
        else
        {
            int count = 0;
            string s = to_string(n);
            for (int i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] == '9')
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            if (count % 2 != 0)
            {
                cout << n + 2 << endl;
            }
            else
            {
                cout << n + 1 << endl;
            }
        }
    }
}