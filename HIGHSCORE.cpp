#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define inp(val) cin >> val
#define oup(val) cout << val << endl
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define fo(i,n) for(i=0;i<n;i++)

int main() 
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        int na=0,nb=0,nc=0,nd=0;
        cin >> na >> nb >> nc >> nd;
        int ans = max(na,max(nb,max(nc,nd)));
        cout << ans << endl;
   }
}