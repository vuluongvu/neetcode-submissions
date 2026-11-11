class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        
        for (int x : nums) freq[x]++;

        int ans = 0, count = 0;
        
        for (auto [k, v] : freq){
            count = max(count, v);
            if (count == v) ans = k;
        }

        return ans;
    }
};