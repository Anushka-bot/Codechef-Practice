#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0;
        cin >> n;
        string div[3 * n];
        int sol[3 * n], final[3 * n];
        for (int i = 0; i < 3 * n; i++)
        {
            cin >> div[i] >> " " >> sol[i];
        }
        int sum = 0, m = 0;
        for (int j = 0; j < 3 * n; j++)
        {
            for (int i = 0; i < 3 * n; i++)
            {
                if(div[j] == "null")
                {
                    continue;
                }
                if (div[j] == div[i])
                {
                    div[i] = "null";
                }
            }
        }
    }
}