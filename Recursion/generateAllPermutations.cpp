#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
void permutations(string s, int i = 0)
{
    if (i == s.length() - 1)
    {
        cout << s << endl;
        return;
    }
    for (int j = i; j < s.length(); j++)
    {
        swap(s[i], s[j]);
        permutations(s, i + 1);
        swap(s[j], s[i]);
    }
}
int main()
{
    string s = "ABC";
    permutations(s);
    return 0;
}