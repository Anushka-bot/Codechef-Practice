#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
      int n=0,a=0;
      cin >> n >> a;
      int mega_a = 0;
      int x = 0;
      for(int i=1;;i++)
      {
          if(i*i > n)
          {
              x = i-1;
              break;
          }
      }
      mega_a = x*a;
      cout << mega_a << endl;
   }
}