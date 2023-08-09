#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)

void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minElemIndex = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[minElemIndex])
                minElemIndex = j;
        }
        if (minElemIndex != i)
            swap(arr[i], arr[minElemIndex]);
    }
}

int main()
{
    int arr[] = {4, 1, 9, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
    return 0;
}