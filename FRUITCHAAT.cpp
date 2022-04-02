#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int x,y,chaats=0;
      cin >> x >> y;
      if((x/2) <= y){
          chaats=x/2;
      }
      else{
          chaats=y;
      }
      cout << chaats << endl;
   }
}