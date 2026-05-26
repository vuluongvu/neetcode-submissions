class Solution {
    /**
     * @param {number[]} nums
     * @return {number[]}
     */
    getConcatenation(nums) {
        let arr = new Array(nums.length * 2);
        for (let i = 0; i < nums.length; ++i){
            arr[i] = arr[i+nums.length] = nums[i];
        }
        return arr;
    }
}
