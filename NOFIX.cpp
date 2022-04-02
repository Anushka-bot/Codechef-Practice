#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, opr = 0;
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        // for(int i=0;i<n;i++){
        //     cout << v[i] << " ";
        // }
        for (int i = 1; i <= n; i++)
        {
            // cout << "v: " << v[i-1] << " ";
            if(v[i-1] == i+opr){
                opr++;
            }
        }
        // cout << endl;
        cout << opr << endl;
    }
}