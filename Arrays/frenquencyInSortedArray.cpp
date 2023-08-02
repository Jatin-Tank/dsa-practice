#include <bits/stdc++.h>
using namespace std;
void frequencyInSortedArray(vector<int> &arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
            count += 1;
        else
        {
            count += 1;
            cout << arr[i] << " -> " << count << endl;
            count = 0;
        }
    }
}
int main()
{
    vector<int> arr = {10};
    frequencyInSortedArray(arr);
    return 0;
}