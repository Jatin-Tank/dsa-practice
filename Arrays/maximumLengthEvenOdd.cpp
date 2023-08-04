#include <bits/stdc++.h>
using namespace std;
// Based on the concept of Kadane's Algorithm
int maxEvenOdd(vector<int> &arr)
{
    vector<int> maxLength(arr.size());
    int solution = 1;
    // length of first subarray would be one
    maxLength[0] = 1;

    for (int i = 1; i < arr.size(); i++)
    {
        if ((arr[i] % 2 == 0 && arr[i - 1] % 2 != 0) || (arr[i] % 2 != 0 && arr[i - 1] % 2 == 0))
        {
            maxLength[i] = maxLength[i - 1] + 1;
            solution = max(solution, maxLength[i]);
        }
        else
            maxLength[i] = 1;
    }
    return solution;
}
int main()
{
    vector<int> arr = {10, 12, 14, 7, 8};
    // vector<int> arr = {1, 2, 2, 3, 4, 4, 1};
    cout << "The maximum sum is : " << maxEvenOdd(arr);
    return 0;
}