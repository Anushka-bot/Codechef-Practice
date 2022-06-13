#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pii;
#define endl "\n"
#define inp(val) cin >> val
#define oup(val) cout << val << endl
#define all(v) v.begin(), v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define fo(i, n) for (i = 0; i < n; i++)

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int h = 0, t = n - 1, make_onesToZeros=0;
        while (h <= t)
        {
            if(s[h] != s[t])
            {
                make_onesToZeros++;
            }
            h++;t--;
        }
        if(make_onesToZeros%2 == 0) 
        {
            cout << make_onesToZeros/2 << endl;
        }
        else{
            cout << make_onesToZeros/2 +1 << endl;
        }
    }
}