#include <iostream>
#include <vector>

using namespace std;

int maximize(vector<int> prices)
{
    int n = prices.size();
    int bestBuy = prices[0];
    int maxProfit = 0;
    for (int i = 0; i < n; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maximize(prices);
    return 0;
}