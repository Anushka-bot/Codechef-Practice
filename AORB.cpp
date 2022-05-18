#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int x,y;
      cin >> x >> y;
      int q = 500 - (x+y)*2;
      int w = 1000 - (x+y)*4;
      int q2 = 500 - (2*x);
      int w2 = 1000 - (4*y);
      if(q2+w > w2+q){
          cout << q2+w << endl;
      }
      else{
          cout << w2+q << endl;
      }
   }
}