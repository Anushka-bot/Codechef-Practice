#include <bits/stdc++.h>
using namespace std;

const int SIZE = 1000000000;
double quantity_of_numbers[SIZE];
double new_quantity_of_numbers[SIZE];
double operations[SIZE];

int main()
{
   int t = 0;
   cin >> t;
   while (t--)
   {
      int n = 0, x = 0, changes_to = 0;
      cin >> n >> x;
      int arr[n];

      for (int i = 0; i < n; i++)
      {
         cin >> arr[i];
         quantity_of_numbers[arr[i]]++;
         new_quantity_of_numbers[i]++;
      }
      for (int i = 0; i < n; i++)
      {
         if (quantity_of_numbers[arr[i]] >= 1)
         {
            changes_to = arr[i] ^ x;
            if (quantity_of_numbers[changes_to] >= 1 && new_quantity_of_numbers[changes_to] == quantity_of_numbers[changes_to])
            {
               operations[changes_to] = quantity_of_numbers[arr[i]];
               new_quantity_of_numbers[changes_to] = quantity_of_numbers[arr[i]] + new_quantity_of_numbers[changes_to];
            }
         }
      }
      int v = 0;
      int max = new_quantity_of_numbers[0];
      for (int i = 1; i < n; i++)
      {
         if (new_quantity_of_numbers[i] > max)
         {
            v = i;
            max = new_quantity_of_numbers[i];
         }
      }
      cout << max << " " << operations[v] << endl;
   }
}