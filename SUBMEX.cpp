// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//    int t = 0;
//    cin >> t;
//    while(t--)
//    {
//       int n,k,x,i=0;
//       cin >> n >> k >> x;
//       vector<int> v_k;
//       if(x-k >= 1){
//           cout << -1 << endl;
//       }
//       else{
//           while(v_k.size() < n){
//               if(i >= x){
//                   i=0;
//               }
//               v_k.push_back(i);
//               i++;
//           }
//           for(auto a:v_k){
//               cout << a << " ";
//           }
//           cout << endl;
//       }
//    }
// }
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (x > k)
        {
            cout << "-1" << endl;
            continue;
        }
        int i = 0;
        while (n--)
        {
            cout << i << " ";
            i++;
            if (i == x)
            {
                i = 0;
            }
        }
        cout << endl;
    }
    return 0;
}