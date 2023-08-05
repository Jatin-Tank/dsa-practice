#include <bits/stdc++.h>
using namespace std;
int sumOfNaturalNumbers(int n)
{
    // Base Case
    if (n == 1)
        return 1;
    return n + sumOfNaturalNumbers(n - 1);
}
int main()
{
    cout << "Sum : " << sumOfNaturalNumbers(15);
    return 0;
}