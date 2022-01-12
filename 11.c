#include <stdio.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int t, k, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (t = 0; t < n - 1; t++) {
 
        // Find the minimum element in unsorted array
        min_idx = t;
        for (k = t + 1; k < n; k++)
            if (arr[k] < arr[min_idx])
                min_idx = k;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[t]);
    }
}
int main()
{
    int T=0;
    scanf("%d",&T);
    int i=0;
    for(i=0;i<T;i++)
    {
        int N=0,arr[N];
        scanf("%d",&N);
        int j=0;
        for(j=0;j<N;j++)
        {
            scanf("%d",&arr[N]);
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        selectionSort(arr, n);
         int m=0,x=0,sum=0;
         for(m=x;m<N;m++)
         {
             int count=1;
             for(x=x+1;x<N;x++)
             {
                 if(arr[m] == arr[x] && x > m) 
                 {
                     count++;
                 }
                 else
                 {
                     break;
                 }
             }
             sum = sum + (m+1)*count;
        }
         
         printf("%d\n",sum/2);
    }
    return 0;
}