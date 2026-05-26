class Solution {
    /**
     * @param {character[]} s
     * @return {void} Do not return anything, modify s in-place instead.
     */
    reverseString(s) {
         let arr = [];
     for (let i = s.length - 1; i >= 0; i--) {
         arr.push(s[i]);
     }
     for (let i = 0; i < arr.length; i++) {
         s[i] = arr[i];
     }
     
    }
}
