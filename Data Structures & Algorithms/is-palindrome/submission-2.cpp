class Solution {
public:
    bool isPalindrome(string s) {
        string filtered;
        for (char c : s){
            if (isalnum(c)){
                filtered += tolower(c);
            }
        }

        int l = 0, r = filtered.length() - 1;
        while (l < r){
            if (filtered[l] == filtered[r]){
                l++;
                r--;
            }
            else {
                return false;
            }
        }
        
        return true;
    }
};
