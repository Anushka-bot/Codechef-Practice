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
        int triplets = 0;
        triplets += n - 1;           // when a = 1 and c = 1
        for (int b = 2; b <= n; b++) // when c = 1 and a-b = 1,,,,,loop for b
        {
            if (n % b != 0)
            {
                triplets += n / b;
            }
            else
            {
                triplets += (n / b) - 1;
            }
        }
        for (int c = 2; c <= n; c++) // when b>c and b is multiple of c,,,,loop for c
        {
            int r = 2;
            int no_of_multiples = (n / c) - 1;     // no. of b for a given c
            triplets += no_of_multiples;           // when a < b
            for (int b = c * 2; b <= n; b = c * r) //choosing all b for a particular c
            {
                if (b != n - 1)              // c can become 1 here if not applied
                {
                    int rem_0 = n / b;
                    int remainders = n % b;
                    if(c > remainders)
                    {
                        triplets += rem_0 - 1;
                    }
                    else
                    {
                        triplets += rem_0;
                    }
                }
                r++;
            }
        }
        cout << triplets << endl;
    }
}
