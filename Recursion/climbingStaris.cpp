#include <iostream>
using namespace std;
int climb(int n)
{

    // Base Case
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    // Recurrence Relation
    return climb(n - 1) + climb(n - 2);
}
int main()
{
    int n = 3;
    cout << "The distinct number of ways to reach " << n << " stairs are : " << climb(n);
    return 0;
}
