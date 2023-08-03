#include <bits/stdc++.h>
using namespace std;
/*
// Naive Approach
int maxElemInRange(vector<int> &left, vector<int> &right, int n)
{
    // Given : 0 < left[i] <= right[i] < 100
    vector<int> freq(100,0);
    for (int i = 0; i < n; i++)
        for (int j = left[i]; j <= right[i]; j++)
            freq[j]++;
    int res = 0;
    for (int i = 1; i < 100; i++)
        if (freq[i] > freq[res])
            res = i;
    return res;
}
*/
// Efficient Approach using Prefix Sum
int maxElemInRange(vector<int> &left, vector<int> &right, int n)
{
    // Initializing vector to Zero
    vector<int> freq(100, 0);
    for (int i = 0; i < n; i++)
    {
        freq[left[i]]++;
        freq[right[i] + 1]--;
    }
    int res = 0;
    for (int i = 1; i < 100; i++)
    {
        freq[i] = freq[i] + freq[i - 1];
        if (freq[i] > freq[res])
            res = i;
    }
    return res;
}
int main()
{
    vector<int> left = {1, 2, 4};
    vector<int> right = {4, 5, 7};
    int n = left.size();

    cout << "The maximum repeating element is : " << maxElemInRange(left, right, n);
    return 0;
}