#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n,v=0;
        cin >> n;
        string num = to_string(n);
        int lastnum = n % 10;
        if (lastnum %2 == 0)
        {
            for (int i = 0; i < num.size()-1; i++)
            {
                if (num[i] % 2 == 0)
                {
                    cout << "YES" << endl;
                    v=1;
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; i < num.size()-1; i++)
            {
                if (num[i] % 2 != 0)
                {
                    cout << "YES" << endl;
                    v=1;
                    break;
                }
            }
        }
        if(v == 0){
            cout << "NO" << endl;
        }
    }
}