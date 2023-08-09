#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
void merge(int arr[], int low, int mid, int high)
{
    int i = low, j = mid + 1, k = low;
    int temparr[high - low + 1];
    while (i <= mid && j <= high)
    {
        if (arr[i] <= arr[j])
        {
            temparr[k] = arr[i];
            i++;
        }
        else
        {
            temparr[k] = arr[j];
            j++;
        }
        k++;
    }
    if (i > mid)
    {
        while (j <= high)
        {
            temparr[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            temparr[k] = arr[i];
            i++;
            k++;
        }
    }

    for (int i = low; i <= high; i++)
        arr[i] = temparr[i];
}
void mergeSort(int *arr, int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {9, 5, 4, 0, 10, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, n - 1);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}