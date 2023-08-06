#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)

int arraySum(int *arr, int n)
{

    // Base Case
    if (n == 0)
        return 0;
    return *arr + arraySum(arr + 1, n - 1);
}
int main()
{
    int arr[] = {1, 5, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The sum of array is : " << arraySum(arr, n);
    return 0;
}