#include <bits/stdc++.h>
using namespace std;
int stockBuyAndSell(vector<int> &price)
{
    int res = 0;

    for (int i = 0; i < price.size(); i++)
    {
        if (price[i] < price[i + 1])
        {
            res = res + (price[i + 1] - price[i]);
        }
    }
    return res;
}
int main()
{
    vector<int> price = {1, 5, 3, 8, 12};
    cout << "The profit is : " << stockBuyAndSell(price);
    return 0;
}