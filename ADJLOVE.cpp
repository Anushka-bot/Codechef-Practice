#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, odd1 = 0,even1 = 0;
        cin >> n;
        int arr[n];
        vector<int> even, odd, final;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
            {
                even1++;
                even.push_back(arr[i]);
            }
            else
            {
                odd1++;
                odd.push_back(arr[i]);
            }
        }
        if (odd1 == 0 || odd1 == 1 || (even1 == 0 && odd1 % 2 != 0))
        {
            cout << -1 << endl;
            continue;
        }
        else if (odd1 % 2 == 0)
        {
            for (int i = 0; i < odd1; i++)
            {
                final.push_back(odd[i]);
            }
            for (int i = 0; i < even1; i++)
            {
                final.push_back(even[i]);
            }
        }
        else
        {
            for (int i = 0; i < odd1 - 1; i++)
            {
                final.push_back(odd[i]);
            }
            for (int i = 0; i < even1; i++)
            {
                final.push_back(even[i]);
            }
            final.push_back(odd[odd1 - 1]);
        }
        for (int i = 0; i < n; i++)
        {
            cout << final[i] << " ";
        }
        cout << endl;
    }
}