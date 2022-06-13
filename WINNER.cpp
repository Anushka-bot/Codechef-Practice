#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   int t = 0;
   cin >> t;
   while(t--)
   {
        int pa,pb,qa,qb;
        cin >> pa >> pb >> qa >> qb;
        if(pa>=pb)
        {
            if(qa>=qb)
            {
                if(pa>qa)
                {
                    cout << 'Q' << endl;
                }
                else if(pa<qa)
                {
                    cout << 'P' << endl;
                }
                else{
                    cout << "TIE" << endl;
                }
            }
            else{
                if(pa>qb)
                {
                    cout << 'Q' << endl;
                }
                else if(pa<qb)
                {
                    cout << 'P' << endl;
                }
                else{
                    cout << "TIE" << endl;
                }
            }
        }
        else{
            if(qa>=qb)
            {
                if(pb>qa)
                {
                    cout << 'Q' << endl;
                }
                else if(pb<qa)
                {
                    cout << 'P' << endl;
                }
                else{
                    cout << "TIE" << endl;
                }
            }
            else{
                if(pb>qb)
                {
                    cout << 'Q' << endl;
                }
                else if(pb<qb)
                {
                    cout << 'P' << endl;
                }
                else{
                    cout << "TIE" << endl;
                }
            }
        }
   }
}