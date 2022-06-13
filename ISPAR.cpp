#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        long long int n,k;
        cin >> n >> k;
        if(k==1){
            if(n%2 == 1)
            {
                cout << "ODD" << endl;
            }
            else{
                cout << "EVEN" << endl;
            }
        }
        else if(k==2)
        {
            cout << "ODD" << endl;
        }
        else{
            cout << "EVEN" << endl;
        }
   }
}