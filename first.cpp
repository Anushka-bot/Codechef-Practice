#include <bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        long long int sum=0;
        long long int ans = INT_MIN;
        for(int i=0;i<n-1;i++){
            sum = a[i]+a[i+1];
            ans = max(ans,sum);
        }
        ans = max(ans,(ll)a[0]+a[n-1]);
        cout << ans << endl;
   }
}