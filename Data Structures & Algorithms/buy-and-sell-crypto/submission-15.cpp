class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int j = 1;
        int ans = 0;
        for (int i = 0; j < prices.size(); j++) {
            int buy = prices[i];
            int sell = prices[j];

            if (buy < sell) {
                ans = std::max(ans, sell - buy);
            } else {
                i = j;
            }
        }
        return ans;
    }
};
