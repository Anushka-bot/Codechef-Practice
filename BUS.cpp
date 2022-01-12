// TLE aarha h code mei AUHUST STARTERS10 QUE 3
// O(n2) ya O(1) mei banana h logic

#include <bits/stdc++.h>
#include <sstream>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, m = 0, q = 0;
        cin >> n >> m >> q;
        cin.ignore();
        int inconsi = 0, ppl = 0, consi = 0, x = 0;
        char sign[q];
        int name[q];
        for (int i = 0; i < q; i++)
        {
            string s;
            getline(cin, s);
            if (s[0] == '-' && ppl != 0)
            {
                ppl = 0;
            }
            else if (s[0] == '+') // Calculating if no. of ppl > seats
            {
                ppl++;
            }
            if (ppl > m)
            {
                inconsi = 1;
            }
            sign[i] = s[0];
            s.erase(0, 2);
            stringstream intValue(s);
            intValue >> name[i];
        }
        if (inconsi == 1)
        {
            cout << "Inconsistent" << endl;
            continue;
        }
        for (int i = 0; i < q; i++)  // to check if a person leave before it entered
        {
            x = name[i];
            if (sign[i] == '-')
            {
                for (int j = 0; j < i; j++)
                {
                    if (name[j] == x && sign[j] == '+')
                    {
                        consi = 1;
                    }
                }
                if (consi == 0)
                {
                    x = 0;
                    break;
                }
            }
        }
        if (x == 0)
        {
            cout << "Inconsistent" << endl;
        }
        else
        {
            cout << "Consistent" << endl;
        }
    }
}