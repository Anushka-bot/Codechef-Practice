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
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        long long int count=0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
        {
            int ele = arr[i];
            int h = (i-ele+1 >= 0) ? i-ele+1 : 0;
            if(m.find(ele)!=m.end() && m[ele]>=h)
            {
                h=m[ele]+1;
            }
            int t = (h+ele-1 >= n) ? n-1: h+ele-1;
            if(t-h+1 != ele || h>t)
            {
                continue;
            }
            count += min(i-h+1,n-t);
            m[arr[i]] = i;
        }
        cout << count << endl;
   }
}