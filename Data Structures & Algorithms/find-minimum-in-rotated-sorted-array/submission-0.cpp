class Solution {
public:
    int findMin(vector<int> &nums) {
        int minN = nums[0];
        for (int n : nums){
            minN = min(n, minN); 
        }
        return minN;
    }
};
