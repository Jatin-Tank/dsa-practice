#include <bits/stdc++.h>
using namespace std;
pair<bool, int> equillibriumPoint(vector<int> arr)
{
    int totalSum = 0, lSum = 0, rSum = 0;
    for (int i = 0; i < arr.size(); i++)
        totalSum += arr[i];

    for (int i = 0; i < arr.size(); i++)
    {
        rSum = totalSum - (lSum + arr[i]);
        if (rSum == lSum)
        {
            return make_pair(true, i);
        }
        lSum += arr[i];
        // cout << lSum << "  :::  " << rSum << endl;
    }
    return make_pair(false, -1);
}
int main()
{
    // vector<int> arr = {3, 4, 8, -9, 20, 6};
    // vector<int> arr = {4, 2, -2};
    vector<int> arr = {4, 2, 2};

    pair<bool, int> solution = equillibriumPoint(arr);
    if (solution.first)
        cout << "True : " << arr[solution.second] << endl;
    else
        cout << "False" << endl;
    return 0;
}