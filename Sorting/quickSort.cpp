#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
int partition(int arr[], int low, int high)
{
    // int pivot = arr[low];
    int pivot = arr[(low + high) / 2];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr[i], arr[j]);
    }
    // Taking Pivot to it right position
    swap(arr[(low + high) / 2], arr[j]);
    // Returning pivot location for furthur recursive Calls
    return j;
}
void quickSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main()
{
    int arr[] = {9, 5, 4, 0, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    for (auto x : arr)
        cout << x << " ";
    return 0;
    return 0;
}