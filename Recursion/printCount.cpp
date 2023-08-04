#include <bits/stdc++.h>
using namespace std;
void printCount(int n)
{
    // Processing
    cout << n << " ";
    // Base Case
    if (n == 1)
        return;
    // recurrence relation
    printCount(n - 1);
}
int main()
{
    printCount(10);
    return 0;
}