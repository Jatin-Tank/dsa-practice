#include <bits/stdc++.h>
using namespace std;
int removeDuplicateFromSortedArray(vector<int> &arr)
{
    int unique = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[unique - 1] != arr[i])
        {
            arr[unique] = arr[i];
            unique += 1;
        }
    }
    return unique;
}
int main()
{
    vector<int> arr = {10, 10, 20, 20, 30, 30};
    int unique = removeDuplicateFromSortedArray(arr);
    cout << "The unique element are : " << unique << endl;
    for (int i = 0; i < unique; i++)
        cout << arr[i] << " ";
    return 0;
}