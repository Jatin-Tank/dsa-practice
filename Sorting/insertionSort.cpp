#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)

void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        // Traversing Left of the array
        int j = i - 1;
        for (; j >= 0 && temp < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {9, 5, 4, 0, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (auto x : arr)
        cout << x << " ";
    return 0;
    return 0;
}