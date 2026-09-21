class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, ans = 0;
        while (r < prices.size()){
            int buy = prices[l], sell = prices[r];
            if (buy < sell){
                int profit = sell - buy;
                ans = max(profit, ans);
            } else {
                l = r;
            }
            r++;
        }

        return ans;
    }
};
