#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n = 0, count = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= 7)
            {
                count++;
            }
            if (count == 7)
            {
                ans = j + 1;
                break;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}