#include <stdio.h>
void insertionsort();
void print();
int main()
{
    int t = 0;
    scanf("%d", &t);
    int i = 0;
    int arr[t];
    for (i = 0; i < t; i++)
    {
        int n = 0;
        scanf("%d", &n);
        arr[i] = n;
    }
    void insertionsort(int arr[], int t);
    void print(int arr[],int t);
    return 0;
}
void insertionsort(int arr[], int t)
{
    int i = 0, key = 0, j = 0;
    for (i = 1; i < t; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void print(int arr[],int t)
{
    int j = 0;
    for (j = 0; j < t; j++)
    {
        printf("%d\n", arr[j]);
    }
}