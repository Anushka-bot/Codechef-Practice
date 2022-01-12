#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n=0,even=0,odd=0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        if (even == n)
        {
            cout << "0" << endl;
        }
        else if (odd % 2 == 0)
        {
            cout << odd / 2 << endl;
        }
        else if(odd%2 != 0)
        {
            cout << (odd - 1) / 2 << endl;
        }
        else if (n % 2 != 0)
        {
            if (odd == n)
            {
                cout << (n - 1) / 2 << endl;
            }
        }
        else
        {
            if (odd == n)
            {
                cout << (n) / 2 << endl;
            }
        }
    }
}