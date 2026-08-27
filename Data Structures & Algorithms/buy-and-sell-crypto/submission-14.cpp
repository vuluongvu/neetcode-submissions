class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0; int r = 1;
        int res = 0;
        while(r < prices.size()){
            int buy = prices[l];
            int sell = prices[r];

            if (buy < sell){
                int profit = sell - buy;
                res = max(res, profit);
            } else {
                l = r;
            }

            r++;
        }
        return res;
    }
};
