class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> freq;
        for (int n : nums){
            if (freq.count(n))
                return n;
            else 
                freq.insert(n);
        }
        return -1;
    }
};
