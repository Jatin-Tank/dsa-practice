#include <bits/stdc++.h>
using namespace std;
vector<int> leadersInArray(vector<int> &arr)
{
    vector<int> sol;
    int leader = arr[arr.size() - 1];
    sol.push_back(leader);
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr[i] > leader)
        {
            leader = arr[i];
            sol.push_back(leader);
        }
    }
    return sol;
}
int main()
{
    vector<int> arr = {7, 10, 4, 3, 6, 5, 2};
    // vector<int> arr = {30, 20, 10};
    vector<int> sol = leadersInArray(arr);

    for (auto i = sol.end() - 1; i >= sol.begin(); i--)
    {
        cout << *i << ' ';
    }
    return 0;
}