#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
// Naive
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

void bubbleSortOptimized(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        if (!swapped)
            break;
    }
}
int main()
{
    int arr[] = {9, 9, 9, 9, 9, 1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSortOptimized(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}