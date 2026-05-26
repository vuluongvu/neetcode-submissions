class Solution {
    /**
     * @param {string} s
     * @return {number}
     */
    lengthOfLastWord(s) {
        return s.trim().split(" ").at(-1).length;
    }
}
