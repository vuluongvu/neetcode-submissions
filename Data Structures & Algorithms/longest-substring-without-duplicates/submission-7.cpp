class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0, ans = 0;
        unordered_set<char> charSet;
        for (int r = 0; r < s.size(); r++){
            while(charSet.count(s[r])){
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
