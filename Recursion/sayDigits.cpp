#include <iostream>
using namespace std;
void sayDigits(int n, string arr[])
{

    // Base Case
    if (n == 0)
        return;

    sayDigits(n / 10, arr);
    cout << arr[n % 10] << " ";
}
int main()
{
    string arr[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int n = 412;
    sayDigits(n, arr);
    return 0;
}
