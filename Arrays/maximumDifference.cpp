#include <bits/stdc++.h>
using namespace std;
// Naive Approach : O(n^2)
// int maximumDifference(vector<int> &arr)
// {
//     int n = arr.size(), maxDiff = INT_MIN;

//     for (int i = 0; i < n-1; i++)
//         for (int j = i + 1; j < n; j++)
//             maxDiff = max(maxDiff, arr[j] - arr[i]);

//     return maxDiff;
// }

// Efficient Approach
int maximumDifference(vector<int> &arr)
{
    int n = arr.size(), maxDiff = INT_MIN, minElem = arr[0];

    for (int j = 1; j < n; j++)
    {
        maxDiff = max(maxDiff, arr[j] - minElem);
        // cout << maxDiff << " - ";
        minElem = min(minElem, arr[j]);
        // cout << minElem << endl;
    }
    return maxDiff;
}
int main()
{
    vector<int> arr = {2, 3, 10, 6, 4, 8, 1};
    cout << "\nMax Difference : " << maximumDifference(arr) << endl;
    return 0;
}