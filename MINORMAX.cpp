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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        // int cnt=0;
        int v=0,min_till_now=INT_MAX,max_till_now=INT_MIN;
        // for(int i=0;i<n-1;i++)
        // {
        //     if(a[i]==a[i+1]){
        //         cnt++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        // if(cnt == n-1)
        // {
        //     cout << "YES" << endl;
        //     continue;
        // }
        // if(a[0]>a[1]){
        //     max_till_now = a[0];
        //     min_till_now = a[1];
        // }
        // else if(a[0]<a[1]){
        //     max_till_now = a[1];
        //     min_till_now = a[0];
        // }
        // else if(a[cnt+1] > a[cnt]){
        //     max_till_now = a[cnt+1];
        //     min_till_now = a[cnt];
        // }
        // else{
        //     max_till_now = a[cnt];
        //     min_till_now = a[cnt+1];
        // }
        // for(int i=2;i<n;i++)
        // {
        //     if(a[i] < min_till_now)
        //     {
        //         min_till_now = a[i];
        //     }
        //     else if(a[i] > max_till_now)
        //     {
        //         max_till_now = a[i];
        //     }
        //     else if(a[i]>min_till_now && a[i]<max_till_now){
        //         v=1;
        //         break;
        //     }
        // }
        // if(v==1){
        //     cout << "NO" << endl;
        // }
        // else{
        //     cout << "YES" << endl;
        // }

        min_till_now = a[0];
        for(int i=1;i<n;i++){
            if(a[i]>min_till_now && max_till_now == INT_MIN){
                max_till_now = a[i];
            }
            else if(a[i]<min_till_now && max_till_now == INT_MIN)
            {
                max_till_now = min_till_now;
                min_till_now = a[i];
            }
            else if(a[i]<min_till_now){
                min_till_now = a[i];
            }
            else if(a[i]>max_till_now)
            {
                max_till_now = a[i];
            }
            else if(a[i]>min_till_now && a[i]<max_till_now){
                v=1;
                break;
            }
        }
        if(v==1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
   }
}