#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
pair<bool, int> binarySearch(int arr[], int start, int end, int key)
{
    if (start > end)
    {
        return make_pair(false, -1);
    }
    else
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
            return make_pair(true, mid);
        if (arr[mid] > key)
            binarySearch(arr, start, mid - 1, key);
        else
            binarySearch(arr, mid + 1, end, key);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 7;
    pair<bool, int> s = binarySearch(arr, 0, n - 1, element);
    if (s.first)
        cout << "Element is present at index : " << s.second << "\n";
    else
        cout << "Element is not present\n";
    return 0;
}