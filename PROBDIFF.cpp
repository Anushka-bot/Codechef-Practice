#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int a = 0, b = 0, c = 0, d = 0;
        cin >> a >> b >> c >> d;
        if (a == b && b == c && c == d)
        {
            printf("0\n");
        }
        else if (a == b && b == c && a != d)
        {
            printf("1\n");
        }
        else if (b == c && c == d && b != a)
        {
            printf("1\n");
        }
        else if (a == c && c == d && a != b)
        {
            printf("1\n");
        }
        else if (a == b && b == d && a != c)
        {
            printf("1\n");
        }
        else if (a == b && b != c && b != d && c != d)
        {
            printf("2\n");
        }
        else if (a == c && a != b && a != d && b != d)
        {
            printf("2\n");
        }
        else if (a == d && a != c && a != b && c != b)
        {
            printf("2\n");
        }
        else if (c == b && b != a && b != d && a != d)
        {
            printf("2\n");
        }
        else if (d == b && b != c && b != a && c != a)
        {
            printf("2\n");
        }
        else if (c == d && c != b && c != a && a != b)
        {
            printf("2\n");
        }
        else if (a == b && c == d && a != c)
        {
            printf("2\n");
        }
        else if (a == c && b == d && a != b)
        {
            printf("2\n");
        }
        else if (a == d && c == b && a != c)
        {
            printf("2\n");
        }
        else
        {
            printf("2\n");
        }
    }
}