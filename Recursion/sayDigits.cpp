#include <iostream>
using namespace std;
void sayDigits(int n)
{
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    // Base Case
    if (n == 0)
        return;
    // Preprocessing
    sayDigits(n / 10);
    cout << arr[n % 10] << " ";
}
int main()
{
    int n = 412;
    sayDigits(412);
    return 0;
}
