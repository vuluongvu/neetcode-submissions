class Solution {
public:
    int findLucky(vector<int>& arr) {
       unordered_map<int, int> freq;
       int largest = 0;
       for (int x : arr) freq[x]++;

        for (auto [k, v] : freq){
            if (k == v){
                largest = max(k, largest);
            }
        }
        return largest != 0 ? largest : -1;
    }
};