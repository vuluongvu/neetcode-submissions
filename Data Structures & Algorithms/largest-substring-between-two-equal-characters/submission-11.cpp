class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char, int> first;
        int ans = -1;
        for (int i = 0; i < s.length(); i++) {
            if (first.count(s[i])){ // if same character
                ans = max(ans, i - first[s[i]] - 1); // i = right, value = left
            } else {
                first[s[i]] = i;
            }
        }
        return ans;
    }
};