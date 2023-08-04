#include <bits/stdc++.h>
using namespace std;
// Moore's Voting Algorithm
int majorityElement(vector<int> &arr)
{
    // Phase - 1 : Finding a candidate
    int count = 1, res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[res] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    // Phase - 2 : Checking candidate is majority or not
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[res] == arr[i])
            count++;
    }
    if (count <= arr.size() / 2)
        return -1;
    return arr[res];
}
int main()
{
    vector<int> arr = {8, 3, 4, 8, 8};
    // vector<int> arr = {1, 2, 2, 3, 4, 4, 1};
    cout << "The majority element is : " << majorityElement(arr);
    return 0;
}