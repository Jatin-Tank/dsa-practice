#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr, int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
}
void leftRotateArrayByDPlaces(vector<int> &arr, int d)
{
    int n = arr.size();
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    vector<int> arr = {77, 88, 99, 11, 22, 33, 44, 55, 66};
    int d = 3;
    leftRotateArrayByDPlaces(arr, d);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}