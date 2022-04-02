#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int n;
      cin >> n;
      double a = (0.143)*(double)n;
      double ans = pow(a,n); 
      int flr = floor(ans);
      int cil=ceil(ans);
      if(ans-flr<0.5){
          cout << flr << endl;
      }
      else{
          cout << cil << endl;
      }
   }
}