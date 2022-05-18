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
      string s;
      cin >> s;
      int count=0;
      for(int i=0;i<n;i++)
      {
        if(s[i]=='c' || s[i]=='g' || s[i]=='l' || s[i]=='r')
        {
            count++;
        }
      }
      if(count==0)
      {
          cout << 1 << endl;
      }
      else{
          int ans = 1;
          for(int i=0;i<count;i++)
          {
              ans = (ans*2)% 1000000007;
          }
          cout << ans << endl;
      }
   }
}