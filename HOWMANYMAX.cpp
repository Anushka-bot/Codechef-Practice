#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007

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
        int count=0,ones=0;
        if(s.size()==1){
            cout << 1 << endl;
            continue;
        }
        for(int i=0;i<n-1;i++)
        {
            if(i==n-2 && ((s[i]=='1' && s[i-1]=='0') || s[i]=='0')){
                count++;
            }
            else if(s[i]=='1' && s[i+1]=='0' && ones==0){
                count++;
            }
            else if(s[i]=='1' && s[i+1]=='1' && ones == 0){
                count++;
                ones++;
            }
            else if(s[i]=='1' && s[i+1]=='1' && ones != 0)
            {
                ones++;
            }
            else if(s[i]=='1' && s[i+1]=='0' && ones != 0){
                ones=0;
            }
        }
        cout << count << endl;
   }
}