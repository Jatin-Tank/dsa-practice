#include <bits/stdc++.h>
using namespace std;
vector<int> arr = {2, 3, 5, 4, 6, 1};
vector<int> pSum(arr.size(), 0);
vector<int> pWeightedSum(arr.size(), 0);
void prefixSum()
{
    pSum[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
        pSum[i] = arr[i] + pSum[i - 1];
    for (int i = 0; i < arr.size(); i++)
        cout << pSum[i] << " ";
    cout << endl;
}
void prefixWeightedSum()
{
    pWeightedSum[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
        pWeightedSum[i] = ((i)*arr[i]) + pSum[i - 1];
    for (int i = 0; i < arr.size(); i++)
        cout << pWeightedSum[i] << " ";
    cout << endl;
}
int getWeightedSum(int left, int right)
{
    if (left == 0)
        return pWeightedSum[right] - ((left - 1) * pSum[right]);
    return ((pWeightedSum[right] - pWeightedSum[left]) - ((left - 1) * (pSum[right] - pSum[left - 1])));
}
int main()
{
    prefixSum();
    prefixWeightedSum();
    cout << getWeightedSum(0, 2) << endl;
    cout << getWeightedSum(2, 3) << endl;

    return 0;
}