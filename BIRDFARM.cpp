#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int chick=0,duck=0;
        if (z % x == 0)
        {
            chick = 1;
        }
        if (z % y == 0)
        {
            duck = 1;
        }
        if (chick == 1 && duck == 1)
        {
            cout << "ANY" << endl;
        }
        else if (chick == 1 && duck == 0)
        {
            cout << "CHICKEN" << endl;
        }
        else if (chick == 0 && duck == 1)
        {
            cout << "DUCK" << endl;
        }
        else
        {
            cout << "NONE" << endl;
        }
    }
}