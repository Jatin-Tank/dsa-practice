#include <bits/stdc++.h>
using namespace std;
int maxOnes(vector<int> &arr)
{
    int count = 0, res = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            count = 0;
        if (arr[i] == 1)
        {
            count++;
            res = max(res, count);
        }
    }
    return res;
}
int main()
{
    // The array is a binary array having one and zeroes only
    vector<int> arr = {1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1};
    cout << "The maximum consecutive one's are : " << maxOnes(arr);
    return 0;
}