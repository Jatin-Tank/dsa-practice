#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
void subset(string s, string curr = "", int i = 0)
{
    if (s.length() == i)
    {
        cout << curr << endl;
        return;
    }
    subset(s, curr, i + 1);
    subset(s, curr + s[i], i + 1);
}
int main()
{
    string s = "ABC";
    subset(s);
    return 0;
}