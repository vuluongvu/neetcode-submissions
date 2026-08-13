class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minBuy = prices[0];
        for (int& sell : prices){
            maxP = max(sell - minBuy, maxP);
            minBuy = min(minBuy, sell);
        }
    
        return maxP;
    }
};
