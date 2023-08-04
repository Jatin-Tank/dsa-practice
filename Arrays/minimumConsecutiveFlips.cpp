#include <bits/stdc++.h>
using namespace std;
/*
// Naive approach
void minimumConsecutiveFlips(vector<int> &arr)
{
    int oneCount = 0, zeroCount = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
            oneCount++;
        else
            zeroCount++;
    }
    int flag = 0;
    if (oneCount <= zeroCount)
    {

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 1 && flag == 0)
            {
                cout << i << " to ";
                flag = 1;
            }
            else if (arr[i] == 0 && flag == 1)
            {
                cout << i - 1;
                flag = 0;
            }
        }
    }
    else
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0 && flag == 0)
            {
                cout << "From " << i << " to ";
                flag = 1;
            }
            else if (arr[i] == 1 && flag == 1)
            {
                cout << i - 1 << endl
                     << endl;
                flag = 0;
            }
        }
    }
}
*/
// Efficient Approach
void minimumConsecutiveFlips(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
                cout << "From " << i << " to ";
            else
                cout << i - 1 << endl;
        }
    }
    if (arr[n - 1] != arr[0])
    {
        cout << n - 1 << endl;
    }
}
int main()
{
    vector<int> arr = {1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 1};
    minimumConsecutiveFlips(arr);
    return 0;
}