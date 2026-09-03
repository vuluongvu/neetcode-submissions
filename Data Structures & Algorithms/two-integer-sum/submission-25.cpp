class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        // nums = 4 5 6 | target = 10
        for (int i = 0; i < nums.size(); i++){
            int need = target - nums[i]; // 10 - 4 = 6
                                         // 10 - 5 = 5
                                         // 10 - 6 = 4
            if (mp.count(need)) return {mp[need], i}; 
            // ? 6 ? 5 ? 4
            mp[nums[i]] = i;
            // 4-0, 5-1, 
        }
        return {};
    }
};
