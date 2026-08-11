class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mp;
        for (int x : nums) mp[x]++;
        for (auto [k,v] : mp){
            if (v > nums.size()/3)
                res.push_back(k);
        }
        return res;
    }
};