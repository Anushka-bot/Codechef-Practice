#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while(t--)
    {
        int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;
        if (a + c == 180 && b + d == 180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}