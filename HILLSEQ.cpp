#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, same_no_present = 0, more_than_two = 0, first_dou_ind = -1;
        vector<int> equal_arr, end_arr, front_arr;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                same_no_present++;
                equal_arr.push_back(arr[i]);
            }
            if (same_no_present == 1 && first_dou_ind == -1)
            {
                first_dou_ind = i;
            }
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i + 1] == arr[i + 2])
            {
                more_than_two++;
                break;
            }
        }
        if (more_than_two > 0)
        {
            cout << -1 << endl;
            continue;
        }
        else if (same_no_present == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
            continue;
        }
        else if (first_dou_ind != 0)
        {
            for (int i = 0; i < first_dou_ind; i++)
            {
                front_arr.push_back(arr[i]);
            }
            for (int i = first_dou_ind; i < n; i++)
            {
                if (arr[i] != arr[i - 1])
                {
                    end_arr.push_back(arr[i]);
                }
            }
        }
        else
        {
            cout << -1 << endl;
            continue;
        }
        for (auto it = equal_arr.end() - 1; it >= equal_arr.begin(); it--)
        {
            cout << (*it) << " ";
        }
        for (auto it = front_arr.begin(); it != front_arr.end(); it++)
        {
            cout << (*it) << " ";
        }
        for (auto it = end_arr.begin(); it != end_arr.end(); it++)
        {
            cout << (*it) << " ";
        }
        cout << endl;
    }
}