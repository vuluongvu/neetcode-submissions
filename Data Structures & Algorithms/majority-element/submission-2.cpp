class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int n : nums){
            mp[n]++;
        }
        int majorE = 0;
        int key = 0;
        for (auto [k,v] : mp){
            if (v > majorE){
                majorE = v;
                key = k;
            }
        }
        return key;
    }
};