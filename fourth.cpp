#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> len(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            len[i] = x;
        }
        sort(len.begin(), len.end());
        int pairs = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (i != n - 1 && len[i] == len[i + 1])
            {
                pairs++;
                i++;
            }
        }
        int flag = 0;
        if ((pairs * 2) % 4 == 0)
        {
            for (int i = 0; i < len.size() - 1; i++)
            {
                if (len[i] == len[i + 1])
                {
                    if (len.size() == 2)
                    {
                        len.erase(len.begin() + i, len.end());
                        flag = 1;
                        break;
                    }
                    else
                    {

                        len.erase(len.begin() + i, len.begin() + i + 2);
                    }
                    i--;
                }
            }
        }
        else
        {
            int pairs2 = 0;
            for (int i = 0; i < len.size() - 1; i++)
            {
                if (len[i] == len[i + 1] && pairs - pairs2 >= 2)
                {
                    pairs2++;
                    if (len.size() == 2)
                    {
                        len.erase(len.begin() + i, len.end());
                        flag = 1;
                        break;
                    }
                    len.erase(len.begin() + i, len.begin() + i + 2);
                    i--;
                }
            }
        }
        int single = 0, doble = 0, triple = 0, stick = 0;
        if(pairs == 0){
            if (len.size() % 2 == 0)
            {
                stick += len.size();
            }
            else
            {
                stick += len.size() - 1;
                stick += 3;
            }
        }
        if (flag == 0 && pairs != 0)
        {
            for (int i = 0; i < len.size() - 1; i++)
            {
                if (i != len.size() - 1 && len[i] != len[i + 1])
                {
                    single++;
                }
                else if (i < len.size() - 2 && len[i] == len[i + 1] && len[i + 1] == len[i + 2])
                {
                    triple++;
                    i += 2;
                }
                else if (i != len.size() - 1 && len[i] == len[i + 1])
                {
                    doble++;
                    i++;
                }
            }
        }
        if (triple > 0)
        {
            stick++;
            if (single > 0)
            {
                if (single % 2 == 0)
                {
                    stick += single;
                }
                else
                {
                    stick += single - 1;
                    stick += 3;
                }
            }
        }
        else if (doble > 0)
        {
            if (single % 2 == 0)
            {
                stick += 2 + single;
            }
            else
            {
                stick += single;
            }
        }
        else if (single > 0)
        {
            if (single % 2 == 0)
            {
                stick += single;
            }
            else
            {
                stick += single - 1;
                stick += 3;
            }
        }
        cout << stick << endl;
    }
}