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
        int n,x;
        cin >> n >> x;
        if(x%2 == 1)
        {
            cout << "YES" << endl;
        }
        else{
            if((n-x)%2 == 0)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
   }
}