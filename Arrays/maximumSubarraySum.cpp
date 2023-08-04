#include <bits/stdc++.h>
using namespace std;
// Kadane's Algorithm
int maxSubSum(vector<int> &arr)
{
    int solution = 0;
    for (int i = 1; i < arr.size(); i++)
        arr[i] = max(arr[i], arr[i - 1] + arr[i]);
    for (int i = 0; i < arr.size(); i++)
        solution = max(solution, arr[i]);
    return solution;
}
int main()
{
    // vector<int> arr = {2, 3, -8, 7, -1, 2, 3};
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << "The maximum sum is : " << maxSubSum(arr);
    return 0;
}