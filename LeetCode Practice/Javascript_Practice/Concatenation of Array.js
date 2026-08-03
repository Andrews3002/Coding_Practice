/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getConcatenation = function (nums) {
    let ans = [];
    let n = nums.length;

    for (let i = 0; i < n; i++) {
        ans.push(nums[i]);
    }

    for (let i = 0; i < n; i++) {
        ans.push(nums[i]);
    }

    return ans;
};
