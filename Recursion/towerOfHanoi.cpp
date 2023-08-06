#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)

void TOH(int n, char A, char B, char C)
{
    // Base Case
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}
int main()
{
    TOH(2, 'A', 'B', 'C');
    return 0;
}