#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    int s = factorial(n - 1);
    return n * s;
}
int main()
{
    cout << "\nFactorial : " << factorial(5);
    return 0;
}