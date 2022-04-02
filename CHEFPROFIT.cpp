#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int x,y,z,ans=0;
      cin >> x >> y >> z;
      ans = x*z - x*y;
      cout << ans << endl;
   }
}