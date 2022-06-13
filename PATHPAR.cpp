#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int n,k;
        cin >> n >> k;
        if(n%2 == 0)
        {
            // int min_odd = n/2;
            // int max_odd = n+((n-1)/2);
            // if(min_odd%2 == 1)
            // {
            //     if(k==1)
            //     {
            //         cout << "YES" << endl;
            //     }
            // }
            // else{
            //     if(k==0)
            //     {
            //         cout << "YES" << endl;
            //     }
            // }
            cout << "YES" << endl;
        }
        else{
            if(k==1)
            {
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
   }
}