#include <bits/stdc++.h>
using namespace std;
/*
// Naive Approach
int slidingWindow(vector<int> &arr, int k)
{
    int sol = 0;
    for (int i = 0; i < arr.size() - k; i++)
    {
        int sum = 0;
        for (int j = 0; j < k; j++)
            sum += arr[i + j];
        sol = max(sum, sol);
    }
    return sol;
}
*/
// Sliding Window approach
int slidingWindow(vector<int> &arr, int k)
{
    int sol = 0, current = 0;
    // Computing initial current window sum
    for (int i = 0; i < k; i++)
        current += arr[i];
    for (int i = k; i < arr.size(); i++)
    {
        current = current + arr[i] - arr[i - k];
        sol = max(sol, current);
    }
    return sol;
}
int main()
{
    vector<int> arr = {1, 8, 30, -5, 20, 7};
    int k = 3;
    cout << "The maximum sum is : " << slidingWindow(arr, k);
    return 0;
}