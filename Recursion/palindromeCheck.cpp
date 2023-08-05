#include <bits/stdc++.h>
using namespace std;
bool palindromeCheck(string str, int start, int end)
{

    // Base Case
    if (start > end)
        return true;
    return ((str[start] == str[end]) && palindromeCheck(str, start + 1, end - 1));
}
int main()
{
    string str = "abbbcvbbba";
    if (palindromeCheck(str, 0, str.length() - 1))
        cout << "Yess\n";
    else
        cout << "No\n";

    return 0;
}