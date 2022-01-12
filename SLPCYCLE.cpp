#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int l = 0, h = 0, count = 0, x = 0, j = 0;
        cin >> l >> h;
        string s;
        cin >> s;
        for (int i = 0; i < l; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
            if (count != 0 && s[i] == '1')
            {
                arr[j] = count;
                count = 0;
                j++;
            }
        }
        for (int i = 0; i < l; i++)
    {
        if (arr[i] == h)
        {
            return 1;
        }
    }
    }
}