class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLastWord(s) {
        let arr = s.trim().split(' ');
      return arr.at(-1).length;
    }
}
