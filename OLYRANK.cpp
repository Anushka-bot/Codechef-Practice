#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    while(t--)
    {
        int g1=0,s1=0,b1=0,g2=0,s2=0,b2=0;
        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if(g1+s1+b1 > g2+s2+b2)
        {
            cout << '1' << endl;
        }
        else
        {
            cout << '2' << endl;
        }
    }
}