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
        int div = n / 5;
        if (div == 0)
        {
            cout << n << endl;
        }
        else{
            cout << (div*4)+(n-((div*4) + div)) << endl;
        }
    }
}