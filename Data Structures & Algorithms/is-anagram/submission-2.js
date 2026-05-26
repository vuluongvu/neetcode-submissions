class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        return Array.from(s).sort().join("") === Array.from(t).sort().join("");
    }
}
