class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; 

        for(int i = 0; i < nums.size(); i++){
            int y = target-nums[i];
            if(mp.contains(y)){
                return {mp[y], i}; 
            }
            mp[nums[i]] = i; 

        }
        return {};
        
    }
};
