class Solution {
    /**
     * @param {string} s
     * @param {string} t
     * @return {boolean}
     */
    isAnagram(s, t) {
        let arrS = Array.from(s);
        let arrT = Array.from(t);

        return arrS.sort().join("") === arrT.sort().join("");
    }
}
