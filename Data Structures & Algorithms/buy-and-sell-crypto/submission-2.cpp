class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1;
        int res = 0;
        while (r < prices.size()){
            int buy = prices[l];
            int sell = prices[r];

            if (buy < sell) {
                int profit = sell - buy;
                res = max(profit, res);
            }
            else {
                l = r;
            }
            
            r++;
        }

        return res; 
    }
};
