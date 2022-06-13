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
        int l,r;
        cin >> l >> r;
        if(r == l+3 && l%2 != 0){
            cout << "-1" << endl;
        }
        else{
            if(l%2 == 0){
                for(int i = 0; i < 4; i++){
                   cout << l + i << " ";
                }
            }
            else{
                for(int i = 1; i < 5; i++){
                     cout << l + i << " ";
                }
            }
            cout << endl;
        }
   }
}