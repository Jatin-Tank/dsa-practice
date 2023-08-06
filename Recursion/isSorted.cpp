#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
bool isSorted(int *arr, int n, int i = 0)
{
    if (n <= 1)
        return true;

    if (i == n)
        return true;
    if (arr[i] <= arr[i + 1])
    {
        isSorted(arr, n, i + 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    int arr[] = {1, 5, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSorted(arr, n))
    {
        cout << "The array is sorted\n";
    }
    else
        cout << "The array not is sorted\n";

    return 0;
}