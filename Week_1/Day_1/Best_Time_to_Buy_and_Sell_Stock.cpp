class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int stk = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            profit = max(profit, prices[i] - stk);
            if (prices[i] < stk)
            {
                stk = prices[i];
            }
        }
        return profit;
    }
};