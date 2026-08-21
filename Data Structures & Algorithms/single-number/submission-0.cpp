class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int x : nums) mp[x]++;

        for (auto [k, v] : mp)
            if (v == 1) return k;
        
        return -1;
    }
};
