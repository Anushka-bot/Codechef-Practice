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
        int a,b;
        cin >> a >> b;
        int steps = 0;
        while(1)
        {
            if(a%3 == 0 || b%3 == 0){
                break;
            }
            else if(a==b){
                steps++;
                break;
            }
            else{
                if(a>b){
                    a = (abs)(a-b);
                }
                else{
                    b = (abs)(a-b);
                }
                steps++;
            }
        }
        cout << steps << endl;
   }
}