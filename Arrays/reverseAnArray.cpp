#include <bits/stdc++.h>
using namespace std;
void reverseAnArray(vector<int> &arr)
{
    for (int i = 0, j = arr.size() - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
}
int main()
{
    vector<int> arr = {1, 20, 30};
    cout << "The reverse Array is :\n";
    reverseAnArray(arr);
    for (auto x : arr)
        cout << x << " ";
    return 0;
}