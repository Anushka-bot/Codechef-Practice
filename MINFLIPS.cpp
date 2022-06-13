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
        int po=0,no=0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == 1){
                po++;
            }
            else{
                no++;
            }
        }
        if(po == no){
            cout << 0 << endl;
        }
        else if(((abs)(po-no))%2 == 1){
            cout << -1 << endl;
        }
        else if(po == 0 && no%2 == 1){
            cout << -1 << endl;
        }
        else if(no == 0 && po%2 == 1){
            cout << -1 << endl;
        }
        else{
            cout << ((abs)(po-no))/2 << endl;
        }
   }
}