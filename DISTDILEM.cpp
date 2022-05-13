#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        vector<int> v;
        while (n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
            sum += x;
        }
        int i=1;
        while(1){
            if(sum<i){
                i--;
                break;
            }
            sum -= i;
            i++;
        }
        cout << i << endl;
    }
}