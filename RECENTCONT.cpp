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
      string a[n];
      for(int i=0;i<n;i++)
      {
          cin >> a[i];
      }
      int starters=0,ltime=0;
      for(int i=0;i<n;i++)
      {
          if(a[i] == "START38")
          {
              starters++;
          }
          if(a[i] == "LTIME108")
          {
              ltime++;
          }
      }
      cout << starters << " " << ltime << endl;
   }
}