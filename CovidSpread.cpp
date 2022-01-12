#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int popu = 0, day = 0;
        cin >> popu >> day;
        double two = (pow(2,day));
        double two1 = (pow(2,10));
        double three = (pow(3,day-10));
        if (day <= 10)
        {
            if ((int)two <= popu)
            {
                cout << (int)two << endl;
            }
            else
            {
                cout << popu << endl;
            }
        }
        else if(day <= 20)
        {
            if ((int)(two1*three) <= popu)
            {
                cout << (int)(two1*three) << endl;
            }
            else
            {
                cout << popu << endl;
            }
        }
        else{
            cout << popu << endl;
        }
    }
}