class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0; int j = 0; string res;
        int n = word1.size(); int m = word2.size();

        while(i < n && i < m){
            res += word1[i];
            res += word2[i];
            i++; j++;
        }
        res += word1.substr(i);
        res += word2.substr(j);
        return res;
    }
};