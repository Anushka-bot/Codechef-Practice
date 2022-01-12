#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, a = 0, b = 0;
        cin >> n >> a >> b;
        int ans = (6 * 60) - ((a + b) - (n * 2));
        printf("%d\n", ans);
    }
}