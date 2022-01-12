#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n = 0, j = 0, max = 0, min = 0, k = 0, mindex = 0, maxdex = 0, maximum = 0, minimum = 0;
        cin >> n;
        int arr[n];
        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        min = arr[0];
        max = arr[0];
        for (k = 1; k < n; k++)
        {
            if (arr[k] > max)
            {
                max = arr[k];
                maxdex = k;
            }
            else if (arr[k] < min)
            {
                min = arr[k];
                mindex = k;
            }
        }
        maxdex = maxdex + 1;
        mindex = mindex + 1;
        if (maxdex > mindex)
        {
            maximum = maxdex;
            minimum = mindex;
        }
        else
        {
            maximum = mindex;
            minimum = maxdex;
        }
        int leftmost = maximum;
        int rightmost = (n - minimum) + 1;
        int both = minimum + ((n - maximum) + 1);
        int ans = 0;
        if (leftmost < rightmost)
        {
            ans = leftmost;
        }
        else
        {
            ans = rightmost;
        }
        if (ans < both)
        {
            cout << ans << endl;
        }
        else
        {
            cout << both << endl;
        }
    }
    return 0;
}