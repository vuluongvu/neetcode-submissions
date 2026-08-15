class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++){
            int need = target - nums[i]; // 7 - 3 = 4
                                        // 7 - 4 = 3
            if (mp.count(need)) return {mp[need], i}; 
            // ? 3 -> 
            mp[nums[i]] = i;
            // 3
        }
        return {};
    }
};
