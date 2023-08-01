#include <bits/stdc++.h>
using namespace std;
/*
// Naive Approach : O(n^2)
void moveZeroesToEnd(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                    break;
                }
            }
        }
    }
}
*/

// Efficient Approach
void moveZeroesToEnd(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] != 0)
        {
            swap(arr[count], arr[i]);
            count++;
        }
}
int main()
{
    vector<int> arr = {10, 0, 20, 0, 30, 0, 0};
    moveZeroesToEnd(arr);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}