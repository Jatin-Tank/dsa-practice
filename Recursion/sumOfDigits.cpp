#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)
int sumOfDigits(int n)
{
    // Base Case
    if (n == 0)
        return 0;
    // Reccurrence Relation
    return n % 10 + sumOfDigits(n / 10);

    // EveryTime a new variable is initialized at different address
    // int sum = n % 10;
    // cout << sum << " : " << &(sum) << endl;
    // return sum + sumOfDigits(n / 10);
}
int main()
{
    int n = 873;
    cout << "The sum of digits is : " << sumOfDigits(n);
    return 0;
}