#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      long long int a=0,b=0;
      cin >> a >> b;
      if(a == 1 || b==1){
          cout << -1 << endl;
      }
      if(a!=1 && b!=1 && __gcd(a,b)==1){
          cout << 1 << endl;
      }
      else{
          cout << 0 << endl;
      }
   }
}