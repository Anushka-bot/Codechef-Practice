#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, sum = 0, r = 0, t = 0;
        cin >> n;
        int a[n];
        int even[n];
        int odd[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even[r] = a[i];
                r++;
            }
            else
            {
                odd[t] = a[i];
                t++;
            }
        }
        if (n % 2 == 0)
        {
            if(r <= n / 2)
            {
                sum += r;
            }
            else 
            {
                sum += n / 2;
            }
            if(t <= n / 2)
            {
                 sum += t;
            }
            else
            {
                 sum += n / 2;
            }
        }
        else
        {
            if(r <= (n / 2) + 1)
            {
                sum += r;
            }
            else
            {
                sum += (n / 2) + 1;
            }
            if(t <= n / 2)
            {
                sum += t;
            }
            else
            {
                 sum += n / 2;
            }
        }
        cout << sum << endl;
    }
}