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
      int a[n];
      for(int i=0;i<n;i++)
      {
          cin >> a[i];
      }
      int count=0,remove=0;
      for(int i=0;i<n-1;i++)
      {
          if(a[i]==a[i+1])
          {
              count++;
          }
          else if(count != 0 && a[i]!= a[i+1]){
              remove += count;
              count=0;
          }
      }
      if(count != 0){
          remove += count;
      }
      cout << n-remove << endl;
   }
}