#include <bits/stdc++.h>
using namespace std;

int mindishes(int,int);
int main()
{
    int t = 0, i = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int p = 0, dish = 0;
        cin >> p;
        int b = mindishes(p, dish);
        cout << b << endl;
    }
    return 0;
}
int mindishes(int p, int dish)
{
    int i = 0, max_div_no = 0, rem = 0, power = 0;
    for (i = 11; i >= 0; i--)
    {
        power = pow(2, i);
        max_div_no = p % power;
        if (max_div_no == 0)
        {
            if (dish != 0)
            {
                dish++;
                return dish;
            }
            else if (dish == 0)
            {
                int c = p / power;
                return c;
            }
        }
        if (max_div_no != p)
        {
            dish++;
            rem = max_div_no;
            return mindishes(rem, dish);
        }
    }
}