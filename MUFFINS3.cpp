#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int n = 0, j = 0, v = 0, count = 0;
        cin >> n;
        if(n % 2 == 0)
        {
            cout << (n/2)+1 << endl;
        }
        else
        {
            cout << (n+1)/2 << endl;
        }
    }
    return 0;
}