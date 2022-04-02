#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int n,x;
      cin >> n >> x;
      if(x >= 0 && x <= n){
          cout << x << endl;
      }
      else{
          while(x > n){
              x = x-n-1;
          }
          cout << x << endl;
      }
   }
}