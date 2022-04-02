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
        if(n%2 == 0){
            cout << n/2 << endl;
        }
        else{
            cout << (n/2 + 1)*(-1) << endl;
        }
    }
}