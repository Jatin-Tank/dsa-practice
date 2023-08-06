#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)

int subsetSumArray(int arr[], int n, int sum)
{
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return subsetSumArray(arr, n - 1, sum) + subsetSumArray(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[] = {10, 5, 2, 3, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 8;
    cout << "The subset having sum equal are : " << subsetSumArray(arr, n, sum);
    return 0;
}