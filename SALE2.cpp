#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int items, x, money = 0;
        cin >> items >> x;
        while (items > 0)
        {
            if(items == 1){
                money += x;
                break;
            }
            money += 2*x;
            items -= 3;
        }
        cout << money << endl;
    }
}