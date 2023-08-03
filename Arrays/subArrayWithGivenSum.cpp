#include <bits/stdc++.h>
using namespace std;
// Naive Approach
bool subarrayWithGivenSum(vector<int> &arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int currentSum = 0;
        for (int j = i; j < arr.size(); j++)
        {
            // cout << arr[j] << " ";
            currentSum += arr[j];
            if (sum == currentSum)
            {
                return true;
            }
        }
    }
    return false;
}
bool subSum(vector<int> &arr, int sum)
{
    int s = 0, curr = 0;
    for (int e = 0; e < arr.size(); e++)
    {
        curr += arr[e];
        while (curr > sum)
        {
            curr -= arr[s];
            s++;
        }
        if (curr == sum)
            return true;
    }
    return false;
}
int main()
{
    vector<int> arr = {1, 4, 20, 3, 10, 5};
    int sum = 33;
    cout << subSum(arr, sum);
    return 0;
}