class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, profit = 0, buyPrice = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] <= buyPrice) {
                buyPrice = prices[i];
            }
            else {
                profit = prices[i] - buyPrice;
                if(profit > maxProfit) maxProfit = profit;
            }
        }
        return maxProfit;
    }
};