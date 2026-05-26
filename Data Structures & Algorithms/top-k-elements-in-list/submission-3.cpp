class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        vector<int> res;
        vector<pair<int,int>> vPair;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for (auto x : mp){
            vPair.push_back({x.first, x.second});
        }
        sort(vPair.begin(), vPair.end(),
        []
            (pair<int,int> a, pair<int,int> b){
            return a.second > b.second;}
        );
        for (int i = 0; i < k; i++){
            res.push_back(vPair[i].first);
        }
        return res;
    }
};
