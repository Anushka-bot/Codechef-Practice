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
      int total_coins = x*y;
      cout << total_coins/100 << endl;
   }
}