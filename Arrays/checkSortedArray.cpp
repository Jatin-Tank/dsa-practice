#include <bits/stdc++.h>
using namespace std;
bool isSorted(vector<int> &arr)
{
    if (arr.size() == 1)
        return true;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > arr[i + 1])
            return false;
        return true;
    }
}
int main()
{
    vector<int> arr = {1, 20, 30};
    (isSorted(arr) == 1) ? cout << "Sorted" : cout << "Not Sorted\n";
    return 0;
}