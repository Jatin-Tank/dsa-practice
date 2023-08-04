#include <bits/stdc++.h>
using namespace std;

// // Naive Approach
// void maxCircularSubarraySum(int *arr, int n)
// {
//     int res = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         int curr_sum = arr[i];
//         int curr_max = arr[i];
//         for (int j = 1; j < n; j++)
//         {
//             int index = (i + j) % n;
//             curr_sum += arr[index];
//             curr_max = max(curr_max, curr_sum);
//         }
//         res = max(res, curr_max);
//     }
//     cout << res;
// }
int kadaneNormalSum(int arr[], int n)
{
    int res = 0, maxEnding = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnding = max(arr[i], maxEnding + arr[i]);
        res = max(res, maxEnding);
    }
    return res;
}
int maxCircularSubarraySum(int *arr, int n)
{
    // Computing max Normal Sum
    int maxNormalSum = kadaneNormalSum(arr, n);
    if (maxNormalSum < 0)
        return maxNormalSum;
    // Computing max Cicular Sum
    int totalArraySum = 0;
    for (int i = 0; i < n; i++)
    {
        totalArraySum += arr[i];
        arr[i] = -arr[i];
    }
    int maxCircularSum = totalArraySum + kadaneNormalSum(arr, n);
    return max(maxCircularSum, maxNormalSum);
}
int main()
{
    int arr[] = {8, -4, 3, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The maximum circular subarray sum is : " << maxCircularSubarraySum(arr, n);

    return 0;
}
