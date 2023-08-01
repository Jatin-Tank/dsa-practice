#include <bits/stdc++.h>
using namespace std;
void leftRotateArray(vector<int> &arr)
{
    int temp = arr[0], n = arr.size();
    for (int i = 1; i < n; i++)
        arr[i - 1] = arr[i];
    arr[n - 1] = temp;
}
int main()
{
    vector<int> arr = {99, 11, 22, 33, 44, 55, 66, 77, 88};
    leftRotateArray(arr);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}