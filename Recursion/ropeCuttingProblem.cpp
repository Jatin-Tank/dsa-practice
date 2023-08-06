#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
int maxi(int a, int b, int c)
{
    if (a >= b)
    {
        if (a >= c)
            return a;
        return c;
    }
    if (b > c)
    {
        return b;
    }
    return c;
}
int ropeCut(int n, int a, int b, int c)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return -1;
    }
    int res1 = ropeCut(n - a, a, b, c);
    int res2 = ropeCut(n - b, a, b, c);
    int res3 = ropeCut(n - c, a, b, c);

    int s = maxi(res1, res2, res3);
    if (s == -1)
        return -1;
    return s + 1;
}
int main()
{
    cout << "The maximum cut that can be made on a rope : " << ropeCut(23, 11, 9, 12) << endl;
    cout << "The maximum cut that can be made on a rope : " << ropeCut(5, 2, 5, 1) << endl;
    return 0;
}