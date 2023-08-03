#include <bits/stdc++.h>
using namespace std;
vector<int> arr = {2, 8, 3, 9, 6, 5, 4};
vector<int> pSum(arr.size(), 0);
void prefixSum()
{
    pSum[0] = arr[0];
    for (int i = 1; i < arr.size(); i++)
        pSum[i] = arr[i] + pSum[i - 1];
}
int getSum(int left, int right)
{
    if (left == 0)
        return pSum[right];
    return (pSum[right] - pSum[left - 1]);
}
int main()
{
    prefixSum();
    cout << getSum(0, 2) << endl;
    cout << getSum(1, 3) << endl;

    return 0;
}