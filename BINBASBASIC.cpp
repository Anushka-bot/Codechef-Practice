#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string reverse_str;
        cin >> reverse_str;
        string str = reverse_str;
        reverse(reverse_str.begin(), reverse_str.end());
        int opr = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] != reverse_str[i])
            {
                str[i] = reverse_str[i];
                reverse_str[n - 1 - i] = str[i];
                opr++;
            }
        }
        if (opr == k && str == reverse_str)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}