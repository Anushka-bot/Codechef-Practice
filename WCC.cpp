#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int x,chef=0,carlsen=0;
      cin >> x;
      string matches;
      cin >> matches;
      for(auto it: matches){
          if(it == 'C'){
              carlsen += 2;
          }
          else if(it == 'N'){
              chef += 2;
          }
          else{
              carlsen += 1;
              chef += 1;
          }
      }
      if(carlsen > chef){
          cout << 60*x << endl;
      }
      else if(chef > carlsen){
          cout << 40*x << endl;
      }
      else{
          cout << 55*x << endl;
      }
   }
}