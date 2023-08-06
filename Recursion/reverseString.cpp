#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
void reverseString(string &str, int start, int end)
{

    // Base Case
    if (start > end)
        return;
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}
int main()
{
    string str = "hello";
    reverseString(str, 0, str.length() - 1);
    cout << str << endl;
    return 0;
}