#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int x,y;
        cin >> x >> y;
        if(x > y)
        {
            if((x-y)%2 == 0)
            {
                cout << (x-y)/2 << endl;
            }
            else{
                cout << (x-y)/2 + 2 << endl;
            }
        }
        else if(y>x)
        {
            cout << y-x << endl;
        }
        else{
            cout << 0 << endl;
        }
   }
}