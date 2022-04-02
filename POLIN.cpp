#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      set<int> set_x,set_y;
      int n;
      cin >> n;
      while(n--){
          int x,y;
          cin >> x >> y;
          set_x.insert(x);
          set_y.insert(y);
      }
      cout << set_x.size()+set_y.size() << endl;
   }
}